# 仓库整合 / Repository consolidation

## 来源 / Sources

- ICPC main: `0cf2bb26a9914853fd189ee952a9843d938f3027`.
- ICPC 贪心笔记分支 / greedy-notes branch: `1e43315296c433548aedd61cc04cbf33c5f2718d`.
- SWU homework main: `0241b4c8a8532bb70c28b8d1bac9f2cc602e6e9a`.

此次整合以 `icpctest` 为承载仓库，按用户要求直接整合文件内容，不导入 SWU 的 Git 提交历史。ICPC 既有历史保留；SWU 历史仍在原仓库。尚未进入 ICPC main 的贪心笔记内容一并保留。原始 C/C++ 源码、样例数据和 MIT 许可证不变。

This consolidation uses `icpctest` as the host and, as requested, imports file content without importing SWU commit history. Existing ICPC history remains; SWU history stays in its original repository. Pending greedy-note content is included. Original C/C++ sources, fixtures, and component MIT licences remain unchanged.

## 路径 / Paths

| 旧路径 / Previous path | 新路径 / New path |
| --- | --- |
| ICPC `basic/`, `luogu/`, `docs/` | `icpc/basic/`, `icpc/luogu/`, `icpc/docs/` |
| ICPC 标准库笔记 / primer | `icpc/标准库入门_Standard_Library_Primer.md` |
| SWU 课程目录、`examples/`、`tests/` | `coursework/` 下的同名路径 / same paths under `coursework/` |

旧 ICPC Markdown 页面保留迁移入口和显式锚点。指向旧源码路径的 main 链接需要改为新路径；查看旧版时可使用以上固定提交 SHA。GitHub 不会自动重定向仓库内移动的文件。

Old ICPC Markdown pages retain migration links and explicit anchors. Old main-branch source links must be updated to the new paths; use the pinned commits above for historical files. GitHub does not automatically redirect moved files within a repository.

原 `swu-homework` 仓库保持不变，不删除、不归档。旧链接、Issues、PR 与 stars 仍归原仓库，不随 Git 历史转移。此方案不是双向同步，两仓之后的新提交需要另行同步。

The original `swu-homework` repository remains unchanged, not deleted or archived. Existing links, issues, PRs, and stars remain there; Git history does not transfer them. This is not two-way synchronization: later source commits require a separate update.

## 自动化 / Automation

根目录 `.github/` 延续 ICPC 协作配置；自动标签工作流不启用、不扩权。`coursework/.github/` 保存原课程仓库配置供查阅，不会作为根工作流运行。已有标签规则按任意层级目录和扩展名匹配，迁移后仍适用。没有新增测试或覆盖率工作流。

Root `.github/` retains the ICPC collaboration configuration; this change neither enables nor expands the permissions of the label workflow. `coursework/.github/` retains the original coursework configuration for reference and is not active as a root workflow. Existing label rules match nested paths and extensions. No test or coverage workflow is introduced.

## 验证与合并 / Validation and merge

验证迁移前后源码和样例字节一致、贪心笔记完整，再运行 README 示例和课程既有回归检查。标签检查不等于测试证据。

Check source/fixture byte identity and inclusion of the greedy notes, then run README examples and existing coursework regression checks. Label checks are not test evidence.

回滚时对本次整合提交使用 `git revert <consolidation-commit-sha>`，先在独立分支检查；这样恢复整合前的 ICPC 布局，不会改动旧 SWU 仓库。后续若已叠加改动，需要先处理冲突。

For rollback, review `git revert <consolidation-commit-sha>` on a separate branch. It restores the pre-consolidation ICPC layout and leaves the old SWU repository unchanged. Later changes may require conflict resolution.
