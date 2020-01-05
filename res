==19656== Memcheck, a memory error detector
==19656== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==19656== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==19656== Command: ./monty test1
==19656== 
==19656== Invalid write of size 1
==19656==    at 0x4C2E1E0: strcpy (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==19656==    by 0x400A20: _split (arrays.c:36)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656==  Address 0x52065a8 is 0 bytes after a block of size 8 alloc'd
==19656==    at 0x4C2AB80: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==19656==    by 0x4009C0: _split (arrays.c:27)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656== 
==19656== Invalid write of size 1
==19656==    at 0x4C2E1F3: strcpy (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==19656==    by 0x400A20: _split (arrays.c:36)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656==  Address 0x52065a9 is 1 bytes after a block of size 8 alloc'd
==19656==    at 0x4C2AB80: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==19656==    by 0x4009C0: _split (arrays.c:27)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656== 
==19656== Invalid read of size 1
==19656==    at 0x4EC2DD3: strtok (strtok.S:175)
==19656==    by 0x400A7F: _split (arrays.c:48)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656==  Address 0x52065a8 is 0 bytes after a block of size 8 alloc'd
==19656==    at 0x4C2AB80: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==19656==    by 0x4009C0: _split (arrays.c:27)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656== 
==19656== Invalid write of size 1
==19656==    at 0x4EC2DE9: strtok (strtok.S:186)
==19656==    by 0x400A7F: _split (arrays.c:48)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656==  Address 0x52065a8 is 0 bytes after a block of size 8 alloc'd
==19656==    at 0x4C2AB80: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==19656==    by 0x4009C0: _split (arrays.c:27)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656== 
==19656== Invalid read of size 1
==19656==    at 0x4EC2D8C: strtok (strtok.S:137)
==19656==    by 0x400A7F: _split (arrays.c:48)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656==  Address 0x52065a9 is 1 bytes after a block of size 8 alloc'd
==19656==    at 0x4C2AB80: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==19656==    by 0x4009C0: _split (arrays.c:27)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656== 
==19656== Invalid read of size 1
==19656==    at 0x4EC2DBC: strtok (strtok.S:163)
==19656==    by 0x400A7F: _split (arrays.c:48)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656==  Address 0x52065a9 is 1 bytes after a block of size 8 alloc'd
==19656==    at 0x4C2AB80: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==19656==    by 0x4009C0: _split (arrays.c:27)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656== 
==19656== Invalid read of size 1
==19656==    at 0x400C15: _isnumber (isnumber.c:14)
==19656==    by 0x401005: exec_line (read_monty.c:102)
==19656==    by 0x400F0D: _read_fpline (read_monty.c:60)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656==  Address 0x52065a8 is 0 bytes after a block of size 8 alloc'd
==19656==    at 0x4C2AB80: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==19656==    by 0x4009C0: _split (arrays.c:27)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656== 
==19656== Invalid read of size 1
==19656==    at 0x4E745B4: ____strtol_l_internal (strtol_l.c:438)
==19656==    by 0x4E70EAF: atoi (atoi.c:27)
==19656==    by 0x400D85: op_push (opcodes.c:30)
==19656==    by 0x401086: exec_line (read_monty.c:113)
==19656==    by 0x400F0D: _read_fpline (read_monty.c:60)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656==  Address 0x52065a8 is 0 bytes after a block of size 8 alloc'd
==19656==    at 0x4C2AB80: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==19656==    by 0x4009C0: _split (arrays.c:27)
==19656==    by 0x400EB3: _read_fpline (read_monty.c:51)
==19656==    by 0x400E3B: read_montyfile (read_monty.c:23)
==19656==    by 0x400C68: main (main.c:20)
==19656== 
==19656== 
==19656== HEAP SUMMARY:
==19656==     in use at exit: 0 bytes in 0 blocks
==19656==   total heap usage: 11 allocs, 11 frees, 25,360 bytes allocated
==19656== 
==19656== All heap blocks were freed -- no leaks are possible
==19656== 
==19656== For counts of detected and suppressed errors, rerun with: -v
==19656== ERROR SUMMARY: 8 errors from 8 contexts (suppressed: 0 from 0)
