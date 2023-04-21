/*
Some facts about declaration and definition
1. If a name is never used(function called, or variable read from/written to), in main,it's definition won't be needed:code will compile just fine.
2. IF you compile without a delaration, and the name is used you get a compiler error:unknown name
3. If you compile with declaration without definition and the name is not used, code compiles
4. If you compile the declaration,without definition and the name is used,you get a linker error
*/