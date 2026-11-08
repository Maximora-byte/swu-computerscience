"""Regression check for the stored A+B exercise.

Run from the unified repository root:
    python3 -m unittest discover -s coursework/tests -v
Requires Python 3 and GCC. All inputs and sums fit in a signed 64-bit integer.
"""

from pathlib import Path
import subprocess
import tempfile
import unittest


SOURCE = (
    Path(__file__).resolve().parents[1]
    / "2026秋季高级语言程序设计(C语言)"
    / "超星"
    / "两整数保存求和_sum_two_integers_stored.c"
)
CASES = [
    ("0 0\n", "0"),
    ("1 2\n", "3"),
    ("-2 -3\n", "-5"),
    ("-7 5\n", "-2"),
    ("2147483647 1\n", "2147483648"),
    ("2147483648 2147483648\n", "4294967296"),
    ("-2147483649 -1\n", "-2147483650"),
    ("9223372036854775807 0\n", "9223372036854775807"),
    ("-9223372036854775808 0\n", "-9223372036854775808"),
    ("9223372036854775806 1\n", "9223372036854775807"),
    ("-9223372036854775807 -1\n", "-9223372036854775808"),
    ("9223372036854775807 -9223372036854775808\n", "-1"),
]


class StoredSumTest(unittest.TestCase):
    def test_formats_and_integer_sums(self):
        with tempfile.TemporaryDirectory() as directory:
            executable = Path(directory) / "sum_two_integers_stored"
            compiled = subprocess.run(
                [
                    "gcc", "-std=c11", "-Wall", "-Wextra", "-Wformat=2",
                    "-Werror", str(SOURCE), "-o", str(executable),
                ],
                capture_output=True,
                text=True,
                timeout=30,
            )
            self.assertEqual(compiled.returncode, 0, compiled.stderr)
            self.assertEqual(compiled.stderr, "")

            for input_text, expected in CASES:
                with self.subTest(input=input_text.strip()):
                    result = subprocess.run(
                        [str(executable)],
                        input=input_text,
                        capture_output=True,
                        text=True,
                        timeout=5,
                    )
                    self.assertEqual(result.returncode, 0, result.stderr)
                    self.assertEqual(result.stderr, "")
                    self.assertEqual(result.stdout, expected)


if __name__ == "__main__":
    unittest.main()
