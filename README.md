# 编程学习 / Programming Studies

一个仓库，两个学习目录；内容采用中英双语。

One repository, two study directories, with Chinese–English documentation.

| 目录 / Directory | 内容 / Contents |
| --- | --- |
| [icpc/](icpc/README.md) | 12 个独立 C++ 竞赛练习、分类题目及标准库学习笔记 / 12 standalone C++ contest exercises, categorized problems, and standard-library notes |
| [coursework/](coursework/README.md) | 西南大学课程练习：71 个 C 源文件、1 个 C++ 示例及已有回归检查 / SWU coursework: 71 C sources, one C++ example, and existing regression checks |

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
