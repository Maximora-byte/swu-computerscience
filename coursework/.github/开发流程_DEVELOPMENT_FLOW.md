# 开发、审查与密钥流程 / Development, Review, and Secret Management Workflow

## 本仓适用范围 / Scope for This Repository

当前仓库是独立 C/C++ 练习集合；编译与已有 A+B 回归检查见[仓库说明](../README.md#回归检查)。默认分支仅保留自动标签工作流文件，没有测试、Codecov 或图片专用工作流。

This repository is a collection of standalone C/C++ exercises; see the [README](../README.md#回归检查) for compilation instructions and the existing A+B regression checks. The default branch retains only the automatic labeling workflow file, with no dedicated testing, Codecov, or image workflow.

下文的外部服务与密钥流程是条件性协作约定，不表示本仓已经配置这些服务，也不构成启用服务或修改密钥的授权。

The external-service and secret-management procedures below are conditional collaboration agreements. They do not imply that these services are configured in this repository, nor do they authorize enabling services or changing secrets.

```text
需求 / Requirements → 本地分支 / Local branch / Copilot Student → PR → 本地检查结果 / Local check results → 人工审核 / Human review
                                                                └→ matchall-bot 分类 / matchall-bot labeling
图片优化（如适用） / Image optimization (if applicable) → ImgBot PR → 实际配置的检查 / Actually configured checks → 人工审核 / Human review
Doppler → dev: 本地应用 / Local application; ci: 专用测试 / Dedicated tests; prd: 经授权的服务器 / Authorized server
```

## 日常使用 / Everyday Workflow

1. 明确需求、验收条件和允许修改的组件；如仓库或上级目录存在 `AGENTS.md`，先读取相关说明。<br>
   Clarify requirements, acceptance criteria, and the components that may be changed; read relevant `AGENTS.md` instructions first if they exist in the repository or a parent directory.
2. 在独立分支实现；Copilot Student 使用当前支持的 Auto 模型。给提示词提供源码与合成测试数据，不提供密钥、用户数据或生产日志。<br>
   Implement changes on a separate branch; use the currently supported Auto model for Copilot Student. Supply source code and synthetic test data in prompts, not secrets, user data, or production logs.
3. 本地执行当前项目的必要检查：如项目已定义检查，应使用这些检查；否则，用受影响文件对应的编译器或解析器验证。不得虚构测试套件已通过，也不得上传学生记录。<br>
   Run the current project's necessary checks locally: use the project-defined checks if present; otherwise validate the affected files with their native compiler or parser. Do not invent a passing test suite or upload student records.
4. 创建小范围 PR，说明行为、检查结果、迁移和回滚影响。如以后另行配置 CI，应按实际工作流说明检查范围；不要把标签工作流当作编译或测试证明。<br>
   Create a narrowly scoped PR describing behavior, check results, and migration and rollback implications. If CI is configured separately in the future, describe its coverage according to the actual workflow; do not treat a labeling workflow as evidence of compilation or testing.
5. 人工代码 PR 准备好时，按需请求一次 Copilot review；普通图片、依赖和文档 bot PR 不默认请求。自动审查、每次 push 审查和付费超额默认关闭。<br>
   Once a human-authored code PR is ready, request one Copilot review as needed; do not request it by default for routine image, dependency, or documentation bot PRs. Automatic reviews, reviews on every push, and paid overage are disabled by default.
6. 检查实际提交的本地验证结果后人工审核；只有已配置相应工作流时才检查 CI / Codecov。合并不触发生产部署许可。<br>
   Conduct human review after checking the local validation results actually submitted; check CI / Codecov only when the corresponding workflows have been configured. Merging does not grant permission to deploy to production.

## Doppler 本地使用 / Doppler Local

默认继续使用现有的不需要密钥的检查。如受影响的后端需要凭据，应为该服务创建独立的 Doppler 项目，并建立使用合成或沙箱凭据的 `dev` 配置，再使用 `doppler run --project <service> --config dev -- <application-command>`。不要使用所有服务共享的单一 token。不要用此命令启动 IDE、Copilot CLI 或智能体。浏览器端、Android 和小程序构建仅接收明确设计为公开的配置；签名与账户凭据属于单独的发布操作。

Existing secret-free checks remain the default. If an affected backend needs credentials, create a separate Doppler project for that service and a dev config with synthetic or sandbox credentials, then use `doppler run --project <service> --config dev -- <application-command>`. Do not use one shared all-service token. Do not wrap an IDE, Copilot CLI or agent in this command. Browser/Android/mini-program builds receive only intentionally public configuration; signing and account credentials are separate release operations.

## Doppler 与 GitHub Actions / Doppler GitHub Actions

普通 PR 单元测试不需要真实密钥。需要联网集成测试时，使用独立 `ci` 环境、只读服务账户和 OIDC 短期身份，仅允许受信任默认分支的手动 `workflow_dispatch`。绑定准确的 `repository`、`ref`、`event_name`、`workflow_ref`、`audience` 和环境主题（environment subject）；禁止通配仓库权限、`pull_request_target` 执行 PR 代码、fork 或任意分支取密钥。

Ordinary PR unit tests do not need real secrets. For networked integration tests, use a separate `ci` environment, a read-only service account, and a short-lived OIDC identity, allowing only manual `workflow_dispatch` runs from the trusted default branch. Bind the exact `repository`, `ref`, `event_name`, `workflow_ref`, `audience`, and environment subject; prohibit wildcard repository permissions, execution of PR code under `pull_request_target`, and secret access by forks or arbitrary branches.

只把 OIDC 身份 ID 放到 GitHub variable；不存长期 Doppler token。不导出所有 GitHub secrets，不把 `prd` 同步到 Actions、Codespaces 或 Copilot Agents。取密钥的 job 不安装或执行 PR 提供的依赖/脚本，不写环境到日志或 artifact。接入前应为本仓另行提供可访问的配置说明与明确授权；本仓未提供 Doppler CI 工作流。

Store only the OIDC identity ID in a GitHub variable, not a long-lived Doppler token. Do not export all GitHub secrets or synchronize `prd` to Actions, Codespaces, or Copilot Agents. Jobs that retrieve secrets must not install or execute PR-provided dependencies/scripts, or write the environment to logs or artifacts. Before integration, provide separately accessible configuration instructions and explicit authorization for this repository; this repository does not provide a Doppler CI workflow.

## Doppler 服务器使用 / Doppler Server

每个服务各有 `prd` 配置及只读单配置 token。token 存在该服务专属的受保护凭据文件，不能给容器、Copilot 或其他服务。生产迁移先审批明确的变量清单和目标，再备份、验证、暂存新配置、检查、仅重建该服务并验证健康；保留已知良好的旧配置以便回滚。Doppler 断网或配置无效时终止刷新，正在运行的服务继续使用原配置；不启用 watch/定时重启。

Each service has its own `prd` configuration and a read-only token scoped to that single configuration. Store the token in a protected credential file dedicated to that service; do not give it to containers, Copilot, or other services. For a production migration, first obtain approval for the exact variable list and target, then back up, validate, stage the new configuration, check it, rebuild only that service, and verify its health; retain the known-good old configuration for rollback. If Doppler is unreachable or the configuration is invalid, abort the refresh and let running services continue with their existing configuration; do not enable watch mode or scheduled restarts.

GitHub App 私钥、现有账户 OAuth 刷新令牌、数据库、聊天数据和备份不在本次迁移范围。生产密钥变更需要单独审批，不能把整台服务器的 `.env` 自动上传。

GitHub App private keys, existing account OAuth refresh tokens, databases, chat data, and backups are outside this migration's scope. Production secret changes require separate approval; do not automatically upload the entire server's `.env`.

## 额度与分工 / Quotas and Responsibilities

matchall-bot 不消耗 Actions 贴标签额度；旧自动标签工作流保持禁用。ImgBot 只在已选择的图片仓库工作。若另行配置 Codecov，应复用已有测试并避免重复上传；当前本仓没有覆盖率上传配置。Copilot 使用学生包含额度，额外预算保持 $0；Doppler 使用已生效的学生 Team 权益，不开启收费附加项。

matchall-bot does not consume Actions quota for labeling; the old automatic labeling workflow remains disabled. ImgBot works only in selected image repositories. If Codecov is configured separately, reuse existing tests and avoid duplicate uploads; this repository currently has no coverage-upload configuration. Copilot uses the included student allowance, with the extra budget kept at $0; Doppler uses the already-active student Team benefits without enabling paid add-ons.
