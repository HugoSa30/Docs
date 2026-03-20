/*
 * Program: n42.bin
 * Function: FUN_000ab844
 * Entry: 000ab844
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ab844(void)

{
  char cVar1;
  uint uVar2;
  
  (*(code *)&SUB_00069410)(0x1b82c);
  cVar1 = (*(code *)&SUB_00fac610)();
  if (cVar1 == '\0') {
    (*(code *)&SUB_00fac64c)(0);
  }
  else {
    (*(code *)&SUB_00fac61c)();
    (*(code *)&SUB_00fac64c)(2);
    uVar2 = 0;
    do {
      (&DAT_005e01dc)[uVar2] = (&DAT_00f00208)[uVar2];
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 0xc);
    if (_DAT_001d46c0 != 0x5a5a) {
      (*(code *)&SUB_00fac634)();
      _DAT_003fffe8 = 0xbb44e169;
      (*(code *)&SUB_00faca3c)(0xd2);
    }
    func_0x00fb2140(4);
  }
  return;
}

