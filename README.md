This example project demonstrates automatic binary hardening for a mixture of C
and C++ code.  The Autoconf script detects the available compiler/linker flags,
and provides them to Automake.

`build.sh` performs a fresh build of everything, including the Autotools
output.

See
[this article](http://mainisusuallyafunction.blogspot.com/2012/05/automatic-binary-hardening-with.html)
for more information.

To the extent possible under law, I waive all copyright and related or
neighboring rights to the code I wrote for this project.  There are some third
party files in the `m4/` subdirectory; those are governed by the respective
licenses which appear in each file.  See `LICENSE` for more details.
