# PR / Issue 自动标签（保留的工作流说明） / Automatic PR / Issue Labeling (Retained Workflow Documentation)

本页说明仓库保留的 `.github/workflows/auto-label.yml` 规则与手动入口。当前协作约定见[开发流程](开发流程_DEVELOPMENT_FLOW.md)：标签由 matchall-bot 负责，旧自动标签工作流按该约定保持禁用。文件仍在仓库中不代表 GitHub 上已启用；以下行为仅描述该工作流被授权启用并执行时的机制。

This page describes the rules and manual entry point for the retained `.github/workflows/auto-label.yml` workflow. See the [development workflow](开发流程_DEVELOPMENT_FLOW.md) for the current collaboration agreement: matchall-bot owns labeling, and the old automatic labeling workflow remains disabled under that agreement. The file's presence in the repository does not mean it is enabled on GitHub; the behavior below only describes how it works when its activation and execution have been authorized.

- Issue 创建、修改、重新打开时重新分类。<br>
  Reclassify an Issue when it is opened, edited, or reopened.
- PR 创建、修改、重新打开、推送新提交、准备评审时重新分类。<br>
  Reclassify a PR when it is opened, edited, reopened, updated with new commits, or marked ready for review.
- 根据中英文标题、正文和 PR 修改的文件路径匹配，可添加多个标签。<br>
  Match Chinese and English titles and bodies, plus file paths changed by the PR; multiple labels may be added.
- 仅补充标签，保留已有标签、颜色和说明；无法分类时添加 `needs-triage`。<br>
  Only add labels, preserving existing labels, colors, and descriptions; add `needs-triage` if no category matches.
- 不会移除标签，因此修改标题后旧标签需要人工清理。<br>
  Labels are never removed, so obsolete labels must be cleaned up manually after a title changes.

| 标签 / Label | 依据 / Matching criteria |
| --- | --- |
| 缺陷（`bug`） / Bug (`bug`) | 修复、报错、崩溃、fix、bug、复现步骤等。<br>Fixes, errors, crashes, terms such as “fix” or “bug,” reproduction steps, and similar signals. |
| 功能改进（`enhancement`） / Enhancement (`enhancement`) | 新功能、新增、改进、feat、feature 等。<br>New functionality, additions, improvements, terms such as “feat” or “feature,” and similar signals. |
| 文档（`documentation`） / Documentation (`documentation`) | 文档相关文本、README、docs、Markdown 文件。<br>Documentation-related text, README, docs, and Markdown files. |
| 问题咨询（`question`） / Question (`question`) | 如何、怎么、求助、question、问号；没有其他匹配时。<br>How-to questions, requests for help, “question,” or question marks, when no other category matches. |
| 依赖（`dependencies`） / Dependencies (`dependencies`) | 依赖更新文本、Dependabot/Renovate、依赖清单和锁文件。<br>Dependency-update text, Dependabot/Renovate, dependency manifests, and lockfiles. |
| 安全（`security`） / Security (`security`) | 安全漏洞、CVE、XSS、权限绕过等。<br>Security vulnerabilities, CVEs, XSS, authorization bypasses, and similar signals. |
| 性能（`performance`） / Performance (`performance`) | 性能、卡顿、内存泄漏、perf 等。<br>Performance, lag, memory leaks, “perf,” and similar signals. |
| 重构（`refactor`） / Refactor (`refactor`) | 重构、refactor 等。<br>Refactoring, “refactor,” and similar signals. |
| 测试（`tests`） / Tests (`tests`) | 测试相关标题和测试文件。<br>Test-related titles and test files. |
| GitHub Actions 工作流（`github-actions`） / GitHub Actions workflows (`github-actions`) | CI/工作流相关文本和 `.github/workflows/` 文件。<br>CI/workflow-related text and files under `.github/workflows/`. |
| 前端（`frontend`） / Frontend (`frontend`) | 前端目录、JSX/TSX、Vue、CSS、HTML 等文件。<br>Frontend directories and files such as JSX/TSX, Vue, CSS, and HTML. |
| 后端（`backend`） / Backend (`backend`) | 后端服务/API 目录、Go/PHP 文件。<br>Backend service/API directories and Go/PHP files. |
| 移动端（`mobile`） / Mobile (`mobile`) | Android/iOS 目录、Kotlin、Swift 等文件。<br>Android/iOS directories and files such as Kotlin and Swift. |
| 待分类（`needs-triage`） / Needs triage (`needs-triage`) | 未匹配到其他类别，等待人工分类。<br>No other category matched; awaiting manual classification. |

这是一套规则分类器，不调用付费 AI 服务。正文中的代码块、HTML 注释、未勾选的复选框和 URL 不参与匹配。机器人不会读取或执行 PR 中的代码。

This is a rule-based classifier and does not call paid AI services. Code blocks, HTML comments, unchecked checkboxes, and URLs in the body are excluded from matching. The bot does not read or execute code from the PR.

## 批量处理与预览 / Bulk Processing and Preview

在 GitHub 的 **Actions → Auto label PRs and Issues → Run workflow** 中：

In GitHub, go to **Actions → Auto label PRs and Issues → Run workflow**:

- `number` 留空：处理所有尚未关闭的 Issue 和 PR。<br>
  Leave `number` empty to process all open Issues and PRs.
- `number` 填写编号：只处理该 Issue 或 PR。<br>
  Enter a number in `number` to process only that Issue or PR.
- 勾选 `dry_run`：仅预览，结果显示在运行摘要中。<br>
  Select `dry_run` for a preview only; results appear in the run summary.

标签缺失时自动创建，现有同名标签保留原有颜色和说明。

Missing labels are created automatically; existing labels with the same name retain their colors and descriptions.

工作流只取得 Issue/PR 写入权限，使用 GitHub 内置的 `GITHUB_TOKEN`，无需配置个人令牌或其他 Secret。Action 固定到完整提交 SHA。

The workflow requests only Issue/PR write permissions and uses GitHub's built-in `GITHUB_TOKEN`; no personal token or other Secret needs to be configured. Actions are pinned to full commit SHAs.

## 调整规则 / Adjusting the Rules

编辑工作流中 `definitions`、`titleRules`、`bodyRules` 和文件路径匹配规则。

Edit `definitions`, `titleRules`, `bodyRules`, and the file-path matching rules in the workflow.

保留 `pull_request_target` 下只运行可信默认分支脚本的设计，不添加 PR 分支 checkout 或执行 PR 代码。

Preserve the design that runs only trusted default-branch scripts under `pull_request_target`; do not add a checkout of the PR branch or execute PR code.

本工作流仅覆盖安装它的仓库；此处保留旧规则机制，不作为新仓默认接入步骤，当前约定见[开发流程](开发流程_DEVELOPMENT_FLOW.md)。

This workflow applies only to the repository where it is installed. These retained rules are not the default onboarding steps for new repositories; see the [development workflow](开发流程_DEVELOPMENT_FLOW.md) for the current agreement.
