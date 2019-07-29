Documentation Author: Niko Procopi 2019

This tutorial was designed for Visual Studio 2017 / 2019
If the solution does not compile, retarget the solution
to a different version of the Windows SDK. If you do not
have any version of the Windows SDK, it can be installed
from the Visual Studio Installer Tool

Welcome to the File-Reading Tutorial!
Prerequesites: Strings

This tutorial will show you how to open a file, and read 
the file, one line at a time. The file you are reading is
an ASCII file, which is designed to be readible by a person.

At the end of every line of an ASCII file is an invisible '\n',
which has an equivalent character value of 10 (ten).

This is important because if you want to read an ASCII file as 
a binary file, or if you read a binary file as an ASCII file,
the extra byte will cause problems.
