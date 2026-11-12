# 西南大学计算机学习 / SWU Computer Science Studies

西南大学计算机学习记录，收录 C/C++ 课程作业、ICPC 算法练习与学习笔记。课程内容按学期整理，竞赛练习按主题与平台分类，文档采用中英双语。

Computer science study records at Southwest University: C/C++ coursework, ICPC algorithm practice, and study notes. Coursework is organized by semester, competitive-programming exercises by topic and platform, with Chinese–English documentation.

原 `icpctest` 与 `swu-homework` 的学习内容已整理到本仓库的两个目录中；目录迁移、原仓库历史及旧链接说明见[迁移记录](MIGRATION.md)。

Study materials from `icpctest` and `swu-homework` are organized into two directories here. See the [migration record](MIGRATION.md) for moved paths, original repository history, and legacy links.

| 目录 / Directory | 内容 / Contents |
| --- | --- |
| [icpc/](icpc/README.md) | 12 个独立 C++ 练习、分类题目与标准库及算法笔记 / 12 standalone C++ exercises, categorized problems, and standard-library and algorithm notes |
| [coursework/](coursework/README.md) | 2026 秋季 C 语言课程：71 个 C 源文件、1 个 C++ 示例及已有回归检查 / Autumn 2026 C coursework: 71 C sources, one C++ example, and existing regression checks |

## 快速开始 / Quick start

```sh
git clone https://github.com/Maximora-byte/swu-computerscience.git
cd swu-computerscience
```

分别进入 `icpc/` 或 `coursework/` 后，按对应 README 的命令编译单个程序。每个练习都是独立程序，不能把所有源码链接到一起。文件读写练习请在临时目录运行，避免覆盖样例文件。

Enter `icpc/` or `coursework/`, then follow that component’s README to compile one program. Exercises are independent programs, not a single link target. Run file-I/O exercises in a temporary directory to avoid overwriting fixtures.

从统一仓库根目录运行已有课程回归检查：

Run the existing coursework regression check from the unified repository root:

```sh
python3 -m unittest discover -s coursework/tests -v
```

该检查只覆盖保存到 `sum` 的 A+B 练习的 12 组输入，不代表全部题解正确或在线评测通过。

This checks only the stored-sum A+B exercise with 12 inputs. It does not certify every solution or online-judge acceptance.

## 学习导航 / Study navigation

- [分类习题 / Categorized exercises](icpc/docs/exercises/README.md)
- [标准库入门 / Standard library primer](icpc/标准库入门_Standard_Library_Primer.md)
- [贪心区间选择 / Greedy interval scheduling](icpc/标准库入门_Standard_Library_Primer.md#greedy-interval-scheduling)
- [课程导航 / Course navigation](coursework/README.md#课程导航)
- [迁移、历史与回滚 / Migration, history, and rollback](MIGRATION.md)
- [开发流程 / Development workflow](.github/开发流程_DEVELOPMENT_FLOW.md)

## 许可 / License

[MIT](LICENSE)。两个组件保留各自原始版权声明：[ICPC](icpc/LICENSE)、[课程作业](coursework/LICENSE)。

[MIT](LICENSE). Both components retain their original copyright notices: [ICPC](icpc/LICENSE), [coursework](coursework/LICENSE).
