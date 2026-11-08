# 高级语言程序设计（C 语言） / Advanced Programming (C)

**2026 秋季 · 48 份独立 C 语言练习，另附 1 个 C++ 示例索引**

**Autumn 2026 · 48 standalone C exercises, plus an index entry for 1 C++ example**

[返回仓库首页 / Back to repository home](../README.md)

课程目录完整保留为 `2026秋季高级语言程序设计(C语言)/`，仍按练习来源和原有知识点分类。源码文件采用“中文题名_english_snake_case”双语命名；下表完整列出本次整理前的文件名、新文件名及更早的已知别名。目录名不变，各行旧名与新名属于该节所示的同一目录。

The course directory remains `2026秋季高级语言程序设计(C语言)/`, grouped by exercise source and the existing topics. Source filenames use bilingual `中文题名_english_snake_case` names. The tables list every filename before this update, its new name, and known earlier aliases. Directories are unchanged; each row’s old and new names share the directory shown in its section.

每份源码都有独立的 `main`，请单独编译。两个整数求和实现、不同目录下的大小写转换和字符统计练习均分别保留，不合并或复制。文件名和索引只描述现有内容，不代表正确性评定或在线评测通过。

Each source has its own `main`; compile files separately. Both integer-sum implementations and the case-conversion and character-counting exercises in different directories remain separate, without merging or duplication. Names and index descriptions document the existing code; they do not certify correctness or online-judge acceptance.

## 欧歌 · 顺序结构 / Ouge · Sequential statements

目录 / Directory: `欧歌/C语言顺序结构/`

| 当前内容 / Current content | 新源码文件 / New source file | 整理前文件名 / Previous filename | 更早别名 / Earlier alias |
| :--- | :--- | :--- | :--- |
| 计算含立方项与平方根的公式<br>Evaluate a formula containing a cubic term and a square root | [`公式计算_formula_calculation.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E9%A1%BA%E5%BA%8F%E7%BB%93%E6%9E%84/%E5%85%AC%E5%BC%8F%E8%AE%A1%E7%AE%97_formula_calculation.c) | `formula_calculation.c` | `公式计算.c` |
| 输入字符并输出字符与字符编码<br>Read a character and print it with its character code | [`字符输入_character_input.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E9%A1%BA%E5%BA%8F%E7%BB%93%E6%9E%84/%E5%AD%97%E7%AC%A6%E8%BE%93%E5%85%A5_character_input.c) | `character_input.c` | `字符输入.c` |
| 整数、浮点数和进制格式化输出<br>Format integers, floating-point values, and number bases | [`格式化输出_formatted_output.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E9%A1%BA%E5%BA%8F%E7%BB%93%E6%9E%84/%E6%A0%BC%E5%BC%8F%E5%8C%96%E8%BE%93%E5%87%BA_formatted_output.c) | `formatted_output.c` | `格式化输出.c` |

## 欧歌 · 选择结构初步 / Ouge · Introductory selection

目录 / Directory: `欧歌/C语言选择结构初步/`

| 当前内容 / Current content | 新源码文件 / New source file | 整理前文件名 / Previous filename | 更早别名 / Earlier alias |
| :--- | :--- | :--- | :--- |
| 按判别式计算一元二次方程实根<br>Compute real quadratic roots using the discriminant | [`一元二次方程求根_quadratic_equation_roots.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E9%80%89%E6%8B%A9%E7%BB%93%E6%9E%84%E5%88%9D%E6%AD%A5/%E4%B8%80%E5%85%83%E4%BA%8C%E6%AC%A1%E6%96%B9%E7%A8%8B%E6%B1%82%E6%A0%B9_quadratic_equation_roots.c) | `quadratic_equation_roots.c` | `一元二次方程求根.c` |
| 判断三边是否成三角形并计算面积<br>Check three sides and calculate triangle area | [`三角形面积_triangle_area.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E9%80%89%E6%8B%A9%E7%BB%93%E6%9E%84%E5%88%9D%E6%AD%A5/%E4%B8%89%E8%A7%92%E5%BD%A2%E9%9D%A2%E7%A7%AF_triangle_area.c) | `triangle_area.c` | `三角形面积.c` |
| 判断能否被 3 整除且不能被 7 整除<br>Check divisibility by 3 but not by 7 | [`倍数判断_divisible_by_3_not_7.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E9%80%89%E6%8B%A9%E7%BB%93%E6%9E%84%E5%88%9D%E6%AD%A5/%E5%80%8D%E6%95%B0%E5%88%A4%E6%96%AD_divisible_by_3_not_7.c) | `divisible_by_3_not_7.c` | `倍数判断.c` |
| 用字符编码转换字母大小写；非字母原样输出<br>Toggle letter case using character codes; print nonletters unchanged | [`字母大小写转换_toggle_letter_case.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E9%80%89%E6%8B%A9%E7%BB%93%E6%9E%84%E5%88%9D%E6%AD%A5/%E5%AD%97%E6%AF%8D%E5%A4%A7%E5%B0%8F%E5%86%99%E8%BD%AC%E6%8D%A2_toggle_letter_case.c) | `toggle_letter_case.c` | `字母大小写转换.c` |
| 用分支比较三个整数的最大值（练习实现）<br>Compare three integers for a maximum using branches (exercise implementation) | [`三个数的最大值_max_of_three.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E9%80%89%E6%8B%A9%E7%BB%93%E6%9E%84%E5%88%9D%E6%AD%A5/%E4%B8%89%E4%B8%AA%E6%95%B0%E7%9A%84%E6%9C%80%E5%A4%A7%E5%80%BC_max_of_three.c) | `max_of_three.c` | `求最大值.c` |

## 欧歌 · 选择结构进阶 / Ouge · Advanced selection

目录 / Directory: `欧歌/C语言选择结构进阶/`

| 当前内容 / Current content | 新源码文件 / New source file | 整理前文件名 / Previous filename | 更早别名 / Earlier alias |
| :--- | :--- | :--- | :--- |
| 校验三边并区分直角、锐角和钝角三角形<br>Validate sides and classify right, acute, and obtuse triangles | [`三角形分类_triangle_classification.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E9%80%89%E6%8B%A9%E7%BB%93%E6%9E%84%E8%BF%9B%E9%98%B6/%E4%B8%89%E8%A7%92%E5%BD%A2%E5%88%86%E7%B1%BB_triangle_classification.c) | `triangle_classification.c` | `三角形判断.c` |
| 按输入区间计算分段函数<br>Evaluate a piecewise function by input interval | [`分段函数计算_piecewise_function.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E9%80%89%E6%8B%A9%E7%BB%93%E6%9E%84%E8%BF%9B%E9%98%B6/%E5%88%86%E6%AE%B5%E5%87%BD%E6%95%B0%E8%AE%A1%E7%AE%97_piecewise_function.c) | `piecewise_function.c` | `分段函数计算.c` |
| 用 ctype 函数转换字母大小写；非字母无输出<br>Toggle letter case with ctype functions; nonletters produce no output | [`大小写字母转换_toggle_letter_case.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E9%80%89%E6%8B%A9%E7%BB%93%E6%9E%84%E8%BF%9B%E9%98%B6/%E5%A4%A7%E5%B0%8F%E5%86%99%E5%AD%97%E6%AF%8D%E8%BD%AC%E6%8D%A2_toggle_letter_case.c) | `toggle_letter_case.c` | `大小写字母转换.c` |
| 按分数阈值输出成绩等级<br>Print a grade category using score thresholds | [`成绩分等_grade_classification.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E9%80%89%E6%8B%A9%E7%BB%93%E6%9E%84%E8%BF%9B%E9%98%B6/%E6%88%90%E7%BB%A9%E5%88%86%E7%AD%89_grade_classification.c) | `grade_classification.c` | `成绩分等.c` |
| 整数四则运算，除法输出商与余数<br>Perform integer arithmetic; division prints quotient and remainder | [`简单计算器_simple_calculator.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E9%80%89%E6%8B%A9%E7%BB%93%E6%9E%84%E8%BF%9B%E9%98%B6/%E7%AE%80%E5%8D%95%E8%AE%A1%E7%AE%97%E5%99%A8_simple_calculator.c) | `simple_calculator.c` | `简单的计算器.c` |

## 欧歌 · 循环结构初步 / Ouge · Introductory loops

目录 / Directory: `欧歌/C语言结构循环初步/`

| 当前内容 / Current content | 新源码文件 / New source file | 整理前文件名 / Previous filename | 更早别名 / Earlier alias |
| :--- | :--- | :--- | :--- |
| 读取 10 个整数，统计能被 3 整除且不能被 7 整除的个数<br>Read 10 integers and count those divisible by 3 but not by 7 | [`倍数个数统计_count_divisible_by_3_not_7.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E7%BB%93%E6%9E%84%E5%BE%AA%E7%8E%AF%E5%88%9D%E6%AD%A5/%E5%80%8D%E6%95%B0%E4%B8%AA%E6%95%B0%E7%BB%9F%E8%AE%A1_count_divisible_by_3_not_7.c) | `数据统计.c` | 无另行记录 / None recorded |
| 统计严格小于 n 的正偶数之和，保留原输出文字<br>Sum positive even integers strictly less than n, retaining the original output text | [`小于n的正偶数之和_sum_even_numbers_below_n.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E7%BB%93%E6%9E%84%E5%BE%AA%E7%8E%AF%E5%88%9D%E6%AD%A5/%E5%B0%8F%E4%BA%8En%E7%9A%84%E6%AD%A3%E5%81%B6%E6%95%B0%E4%B9%8B%E5%92%8C_sum_even_numbers_below_n.c) | `统计不大于n的偶数之和.c` | 无另行记录 / None recorded |
| 用 while 循环累乘阶乘<br>Calculate a factorial by multiplication in a while loop | [`阶乘累乘_factorial_while.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E7%BB%93%E6%9E%84%E5%BE%AA%E7%8E%AF%E5%88%9D%E6%AD%A5/%E9%98%B6%E4%B9%98%E7%B4%AF%E4%B9%98_factorial_while.c) | `计算n阶层-dowhile.c` | 无另行记录 / None recorded |
| 用 while 求 1 + 1/3 + … + 1/(2n−1)<br>Use while to sum 1 + 1/3 + … + 1/(2n−1) | [`奇数分母倒数和_sum_odd_reciprocals_while.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E7%BB%93%E6%9E%84%E5%BE%AA%E7%8E%AF%E5%88%9D%E6%AD%A5/%E5%A5%87%E6%95%B0%E5%88%86%E6%AF%8D%E5%80%92%E6%95%B0%E5%92%8C_sum_odd_reciprocals_while.c) | `计算分数之和-while.c` | 无另行记录 / None recorded |
| 用 for 求 1/(1×2) + … + 1/(n×(n+1))<br>Use for to sum 1/(1×2) + … + 1/(n×(n+1)) | [`相邻整数乘积倒数和_sum_adjacent_reciprocals_for.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E7%BB%93%E6%9E%84%E5%BE%AA%E7%8E%AF%E5%88%9D%E6%AD%A5/%E7%9B%B8%E9%82%BB%E6%95%B4%E6%95%B0%E4%B9%98%E7%A7%AF%E5%80%92%E6%95%B0%E5%92%8C_sum_adjacent_reciprocals_for.c) | `计算分数之和for.c` | 无另行记录 / None recorded |

## 欧歌 · 循环结构进阶 / Ouge · Advanced loops

目录 / Directory: `欧歌/C语言循环结构进阶/`

| 当前内容 / Current content | 新源码文件 / New source file | 整理前文件名 / Previous filename | 更早别名 / Earlier alias |
| :--- | :--- | :--- | :--- |
| 统计 10 个整数中的正数、负数和零；正数输出标签仍为“整数”<br>Count positive, negative, and zero values among 10 integers; the positive count retains the output label “integers” | [`正负数与零统计_count_positive_negative_zero.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E5%BE%AA%E7%8E%AF%E7%BB%93%E6%9E%84%E8%BF%9B%E9%98%B6/%E6%AD%A3%E8%B4%9F%E6%95%B0%E4%B8%8E%E9%9B%B6%E7%BB%9F%E8%AE%A1_count_positive_negative_zero.c) | `数据统计.c` | 无另行记录 / None recorded |
| 枚举百钱买百鸡的公鸡、母鸡与小鸡数量<br>Enumerate rooster, hen, and chick counts for the hundred-chickens puzzle | [`百钱买百鸡_hundred_chickens.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E5%BE%AA%E7%8E%AF%E7%BB%93%E6%9E%84%E8%BF%9B%E9%98%B6/%E7%99%BE%E9%92%B1%E4%B9%B0%E7%99%BE%E9%B8%A1_hundred_chickens.c) | `百钱买百鸡.c` | 无另行记录 / None recorded |
| 通过试除判断整数是否为素数<br>Test integer primality by trial division | [`素数判断_primality_check.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E5%BE%AA%E7%8E%AF%E7%BB%93%E6%9E%84%E8%BF%9B%E9%98%B6/%E7%B4%A0%E6%95%B0%E5%88%A4%E6%96%AD_primality_check.c) | `素数判断.c` | 无另行记录 / None recorded |
| 输出三角形排列的九九乘法表<br>Print a triangular 1–9 multiplication table | [`九九乘法表_multiplication_table.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E5%BE%AA%E7%8E%AF%E7%BB%93%E6%9E%84%E8%BF%9B%E9%98%B6/%E4%B9%9D%E4%B9%9D%E4%B9%98%E6%B3%95%E8%A1%A8_multiplication_table.c) | `输出九九乘法表.c` | 无另行记录 / None recorded |
| 枚举三位数中的水仙花数<br>Enumerate three-digit Armstrong numbers | [`三位水仙花数_three_digit_armstrong_numbers.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E5%BE%AA%E7%8E%AF%E7%BB%93%E6%9E%84%E8%BF%9B%E9%98%B6/%E4%B8%89%E4%BD%8D%E6%B0%B4%E4%BB%99%E8%8A%B1%E6%95%B0_three_digit_armstrong_numbers.c) | `输出水仙花数.c` | 无另行记录 / None recorded |

## 欧歌 · 一维数组 / Ouge · One-dimensional arrays

目录 / Directory: `欧歌/C语言一维数组/`

| 当前内容 / Current content | 新源码文件 / New source file | 整理前文件名 / Previous filename | 更早别名 / Earlier alias |
| :--- | :--- | :--- | :--- |
| 用数组生成以 1、1 开始的 Fibonacci 数列<br>Generate a Fibonacci sequence beginning with 1, 1 in an array | [`斐波那契数列_fibonacci_sequence.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E4%B8%80%E7%BB%B4%E6%95%B0%E7%BB%84/%E6%96%90%E6%B3%A2%E9%82%A3%E5%A5%91%E6%95%B0%E5%88%97_fibonacci_sequence.c) | `Fibonacci数列.c` | 无另行记录 / None recorded |
| 统计 10 个分数的最大值、最小值、下标和均值，再降序排列<br>Find extrema, indices, and mean of 10 scores, then sort descending | [`成绩统计_grade_statistics.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E4%B8%80%E7%BB%B4%E6%95%B0%E7%BB%84/%E6%88%90%E7%BB%A9%E7%BB%9F%E8%AE%A1_grade_statistics.c) | `成绩统计.c` | 无另行记录 / None recorded |
| 逐位提取正整数，从个位开始输出数字<br>Extract positive-integer digits starting with the units digit | [`逆序数字分离_reverse_digit_extraction.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E4%B8%80%E7%BB%B4%E6%95%B0%E7%BB%84/%E9%80%86%E5%BA%8F%E6%95%B0%E5%AD%97%E5%88%86%E7%A6%BB_reverse_digit_extraction.c) | `数字分离.c` | 无另行记录 / None recorded |
| 枚举输入整数在 100 至 999 范围内的所有约数；不是最大公约数算法<br>List all divisors of the input integer from 100 to 999; this is not a greatest-common-divisor algorithm | [`三位约数枚举_list_three_digit_divisors.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E4%B8%80%E7%BB%B4%E6%95%B0%E7%BB%84/%E4%B8%89%E4%BD%8D%E7%BA%A6%E6%95%B0%E6%9E%9A%E4%B8%BE_list_three_digit_divisors.c) | `计算最大约数.c` | 无另行记录 / None recorded |

## 欧歌 · 二维数组 / Ouge · Two-dimensional arrays

目录 / Directory: `欧歌/C语言二维数组/`

| 当前内容 / Current content | 新源码文件 / New source file | 整理前文件名 / Previous filename | 更早别名 / Earlier alias |
| :--- | :--- | :--- | :--- |
| 查找 3×4 数组最大值及其从 0 开始的行列下标<br>Find the maximum and zero-based row/column indices in a 3×4 array | [`二维数组最大值及下标_matrix_maximum_indices.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84/%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84%E6%9C%80%E5%A4%A7%E5%80%BC%E5%8F%8A%E4%B8%8B%E6%A0%87_matrix_maximum_indices.c) | `二维数组最大值及下标.c` | 无另行记录 / None recorded |
| 输出 4×5 数组各行最大值<br>Print each row maximum of a 4×5 array | [`二维数组每行最大值_matrix_row_maxima.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84/%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84%E6%AF%8F%E8%A1%8C%E6%9C%80%E5%A4%A7%E5%80%BC_matrix_row_maxima.c) | `二维数组每行最大值.c` | 无另行记录 / None recorded |
| 将 4×3 矩阵按 3×4 转置形式输出；不是求逆<br>Print a 4×3 matrix transposed as 3×4; this is not matrix inversion | [`矩阵转置_matrix_transpose.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84/%E7%9F%A9%E9%98%B5%E8%BD%AC%E7%BD%AE_matrix_transpose.c) | `矩阵逆置.c` | 无另行记录 / None recorded |
| 输出 5×4 数组各行元素之和<br>Print each row sum of a 5×4 array | [`二维数组每行求和_matrix_row_sums.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84/%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84%E6%AF%8F%E8%A1%8C%E6%B1%82%E5%92%8C_matrix_row_sums.c) | `计算二维数组每行数据之和.c` | 无另行记录 / None recorded |
| 求 5×5 矩阵主对角线之和<br>Sum the main diagonal of a 5×5 matrix | [`矩阵主对角线求和_matrix_diagonal_sum.c`](./%E6%AC%A7%E6%AD%8C/C%E8%AF%AD%E8%A8%80%E4%BA%8C%E7%BB%B4%E6%95%B0%E7%BB%84/%E7%9F%A9%E9%98%B5%E4%B8%BB%E5%AF%B9%E8%A7%92%E7%BA%BF%E6%B1%82%E5%92%8C_matrix_diagonal_sum.c) | `计算矩阵对角线元素之和.c` | 无另行记录 / None recorded |

## 欧歌 · 文件与字符 / Ouge · Files and characters

目录 / Directory: `欧歌/文件/`

| 当前内容 / Current content | 新源码文件 / New source file | 整理前文件名 / Previous filename | 更早别名 / Earlier alias |
| :--- | :--- | :--- | :--- |
| 统计一行输入中的字母、数字、空格和其他字符<br>Count letters, digits, spaces, and other characters in one input line | [`单行字符分类统计_count_line_character_types.c`](./%E6%AC%A7%E6%AD%8C/%E6%96%87%E4%BB%B6/%E5%8D%95%E8%A1%8C%E5%AD%97%E7%AC%A6%E5%88%86%E7%B1%BB%E7%BB%9F%E8%AE%A1_count_line_character_types.c) | `C 语言统计一行输入中的字母、数字、空格和其他字符的数量.c` | 无另行记录 / None recorded |
| 将 1 至 9999 中满足“个位数字立方等于自身”的整数写入二进制文件再读出；最后值额外输出一次<br>Write integers from 1 to 9999 whose last digit cubed equals the integer to a binary file, then read them; print the last value once more | [`二进制文件读写_binary_file_read_write.c`](./%E6%AC%A7%E6%AD%8C/%E6%96%87%E4%BB%B6/%E4%BA%8C%E8%BF%9B%E5%88%B6%E6%96%87%E4%BB%B6%E8%AF%BB%E5%86%99_binary_file_read_write.c) | `二进制文件读写.c` | 无另行记录 / None recorded |
| 读取文件名，将字符写入文件直到 # 或 EOF，然后回读<br>Read a filename, write characters until # or EOF, then read the file back | [`字符方式写读文件_write_then_read_characters.c`](./%E6%AC%A7%E6%AD%8C/%E6%96%87%E4%BB%B6/%E5%AD%97%E7%AC%A6%E6%96%B9%E5%BC%8F%E5%86%99%E8%AF%BB%E6%96%87%E4%BB%B6_write_then_read_characters.c) | `字符方式写文件.c` | 无另行记录 / None recorded |
| 按输入文件名逐字符读取并输出<br>Read the named file and print it character by character | [`字符方式读文件_read_file_characters.c`](./%E6%AC%A7%E6%AD%8C/%E6%96%87%E4%BB%B6/%E5%AD%97%E7%AC%A6%E6%96%B9%E5%BC%8F%E8%AF%BB%E6%96%87%E4%BB%B6_read_file_characters.c) | `字符方式读文件.c` | 无另行记录 / None recorded |
| 读取 input.txt，将字母、数字、空格和其他字符的数量写入 output.txt；忽略换行与回车<br>Read input.txt and write counts of letters, digits, spaces, and other characters to output.txt; ignore line feeds and carriage returns | [`文件字符分类统计_count_file_character_types.c`](./%E6%AC%A7%E6%AD%8C/%E6%96%87%E4%BB%B6/%E6%96%87%E4%BB%B6%E5%AD%97%E7%AC%A6%E5%88%86%E7%B1%BB%E7%BB%9F%E8%AE%A1_count_file_character_types.c) | `文件操作.c` | 无另行记录 / None recorded |

## 超星练习 / Chaoxing exercises

目录 / Directory: `超星/`

| 当前内容 / Current content | 新源码文件 / New source file | 整理前文件名 / Previous filename | 更早别名 / Earlier alias |
| :--- | :--- | :--- | :--- |
| 将华氏温度转换为摄氏温度<br>Convert Fahrenheit to Celsius | [`华氏转摄氏_fahrenheit_to_celsius.c`](./%E8%B6%85%E6%98%9F/%E5%8D%8E%E6%B0%8F%E8%BD%AC%E6%91%84%E6%B0%8F_fahrenheit_to_celsius.c) | `celsius.c` | 无另行记录 / None recorded |
| 演示前置和后置自增、自减表达式<br>Demonstrate prefix and postfix increment/decrement expressions | [`自增自减表达式_increment_decrement_expressions.c`](./%E8%B6%85%E6%98%9F/%E8%87%AA%E5%A2%9E%E8%87%AA%E5%87%8F%E8%A1%A8%E8%BE%BE%E5%BC%8F_increment_decrement_expressions.c) | `temp.c` | 无另行记录 / None recorded |
| 降序排列尺寸并计算体积与体积重量<br>Sort dimensions descending and calculate volume and dimensional weight | [`体积重量计算_dimensional_weight.c`](./%E8%B6%85%E6%98%9F/%E4%BD%93%E7%A7%AF%E9%87%8D%E9%87%8F%E8%AE%A1%E7%AE%97_dimensional_weight.c) | `dimensional_weight.c` | `DimensionalWeight.c` |
| 直接输出两个 long long 整数之和，带换行<br>Print the sum of two long long integers directly, with a newline | [`两整数直接求和_sum_two_integers_direct.c`](./%E8%B6%85%E6%98%9F/%E4%B8%A4%E6%95%B4%E6%95%B0%E7%9B%B4%E6%8E%A5%E6%B1%82%E5%92%8C_sum_two_integers_direct.c) | `sum_two_integers_direct.c` | `asumb.c` |
| 输出 C 语言 Hello World 示例<br>Print the C Hello World example | [`你好世界_hello_world.c`](./%E8%B6%85%E6%98%9F/%E4%BD%A0%E5%A5%BD%E4%B8%96%E7%95%8C_hello_world.c) | `hello_world.c` | `helloworld.c` |
| 交换固定初值 22 和 33 并输出<br>Swap the fixed initial values 22 and 33, then print them | [`交换两个整数_swap_two_integers.c`](./%E8%B6%85%E6%98%9F/%E4%BA%A4%E6%8D%A2%E4%B8%A4%E4%B8%AA%E6%95%B4%E6%95%B0_swap_two_integers.c) | `swap_two_integers.c` | `定义两个整型变量a和b.c` |
| 计算两个时刻在同一天内的分钟差绝对值<br>Calculate the absolute difference in minutes between two same-day times | [`时间差计算_time_difference.c`](./%E8%B6%85%E6%98%9F/%E6%97%B6%E9%97%B4%E5%B7%AE%E8%AE%A1%E7%AE%97_time_difference.c) | `time_difference.c` | `时间差计算.c` |
| 将两个 long long 整数之和保存到 sum 再输出，不带换行<br>Store the sum of two long long integers in sum and print it without a newline | [`两整数保存求和_sum_two_integers_stored.c`](./%E8%B6%85%E6%98%9F/%E4%B8%A4%E6%95%B4%E6%95%B0%E4%BF%9D%E5%AD%98%E6%B1%82%E5%92%8C_sum_two_integers_stored.c) | `sum_two_integers_stored.c` | `计算aplusb.c` |
| 统计直到换行或 EOF 的输入字符数<br>Count input characters until a newline or EOF | [`单行消息长度_message_length.c`](./%E8%B6%85%E6%98%9F/%E5%8D%95%E8%A1%8C%E6%B6%88%E6%81%AF%E9%95%BF%E5%BA%A6_message_length.c) | `message的长度.c` | 无另行记录 / None recorded |
| 用 fgets 分块逐行读取并输出 f.txt，不进行成绩统计<br>Read and print f.txt linewise in fgets-sized chunks; no grade statistics are calculated | [`逐行读取文件_read_file_lines.c`](./%E8%B6%85%E6%98%9F/%E9%80%90%E8%A1%8C%E8%AF%BB%E5%8F%96%E6%96%87%E4%BB%B6_read_file_lines.c) | `wenjianchengji.c` | 无另行记录 / None recorded |
| 统计一行输入中的字母、数字、空格和其他字符<br>Count letters, digits, spaces, and other characters in one input line | [`字符分类统计_count_character_types.c`](./%E8%B6%85%E6%98%9F/%E5%AD%97%E7%AC%A6%E5%88%86%E7%B1%BB%E7%BB%9F%E8%AE%A1_count_character_types.c) | `统计字符.c` | 无另行记录 / None recorded |

## 名称与实现差异 / Names and implementation differences

- 旧名 `统计不大于n的偶数之和.c` 的程序先执行 `n--`，实际累计严格小于 n 的正偶数；原来的“不大于”输出文字没有修改。<br>The program formerly named `统计不大于n的偶数之和.c` executes `n--` first, so it sums positive even numbers strictly below n. Its original “not greater than” output text is unchanged.
- 旧名 `计算n阶层-dowhile.c` 实际使用 `while`，并非 `do...while`；本次仅按实现重命名。<br>The former `计算n阶层-dowhile.c` uses `while`, not `do...while`; only its name is aligned with the implementation.
- 旧名 `计算最大约数.c` 输出输入整数的全部三位约数，不计算最大公约数；`矩阵逆置.c` 输出 4×3 矩阵的转置，不计算逆矩阵。<br>The former `计算最大约数.c` lists all three-digit divisors of the input integer, not a greatest common divisor; `矩阵逆置.c` prints the transpose of a 4×3 matrix, not an inverse.
- 旧名 `wenjianchengji.c` 只读取 `f.txt` 并输出，不计算成绩；`temp.c` 演示自增自减，不是温度转换。<br>The former `wenjianchengji.c` only reads and prints `f.txt`; it does not calculate grades. `temp.c` demonstrates increment/decrement rather than temperature conversion.
- 保留原有算法、输出文字、注释和数据文件，不因文档整理修复潜在问题。请根据原题另行核对输入、输出及边界条件。<br>Original algorithms, output text, comments, and data files are preserved; this documentation update does not fix potential defects. Check inputs, outputs, and boundary conditions separately against the original assignments.

## C++ 示例 / C++ example

| 内容 / Content | 新路径 / New path | 整理前路径 / Previous path | 更早别名 / Earlier alias |
| :--- | :--- | :--- | :--- |
| 你好世界示例 / Hello World example | [`examples/cpp/你好世界_hello_world.cpp`](../examples/cpp/%E4%BD%A0%E5%A5%BD%E4%B8%96%E7%95%8C_hello_world.cpp) | `examples/cpp/hello_world.cpp` | `helloworld.cpp` |

## 编译与提交 / Compiling and submitting

在仓库根目录执行以下示例（Linux、macOS 或 Git Bash，需要 GCC）。

Run this example from the repository root (Linux, macOS, or Git Bash, with GCC installed).

```bash
mkdir -p build
gcc "2026秋季高级语言程序设计(C语言)/超星/你好世界_hello_world.c" -o build/hello
./build/hello
```

输出放在已被 Git 忽略的 `build/` 目录。Windows PowerShell 的建目录与运行写法见[仓库首页](../README.md#开始使用)。

Put build outputs in the Git-ignored `build/` directory. See the [repository home](../README.md#开始使用) for directory creation and execution in Windows PowerShell.

涉及 `sqrt`、`sin`、`exp` 等数学函数的程序，在部分 GCC 环境中需要在编译命令末尾添加 `-lm`。

Programs using mathematical functions such as `sqrt`, `sin`, and `exp` need `-lm` at the end of the compile command in some GCC environments.

文件操作程序使用运行时工作目录或用户输入的文件名。`f.txt` 保持原名；`input.txt`、`output.txt` 等运行时约定也不改动。写文件的练习应在单独的临时目录测试，避免覆盖学习资料。

File exercises use the runtime working directory or an entered filename. `f.txt` keeps its name, as do runtime conventions such as `input.txt` and `output.txt`. Test file-writing exercises in a separate temporary directory to avoid overwriting study materials.

已有测试仅覆盖保存到 `sum` 的 A+B 程序，运行方法与限制见[回归检查](../README.md#回归检查)。如课程要求固定提交文件名，提交时遵循原要求，并通过上表查找旧名。

The existing tests cover only the A+B program that stores its result in `sum`; see [regression checks](../README.md#回归检查) for commands and limitations. If the course requires a fixed submission filename, follow that requirement and use the tables to locate the old name.
