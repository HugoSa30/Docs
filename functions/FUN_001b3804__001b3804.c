/*
 * Program: n42.bin
 * Function: FUN_001b3804
 * Entry: 001b3804
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_001b3804(void)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined uVar5;
  byte local_10 [4];
  
  uVar1 = DAT_003fc93c;
  uVar5 = 0;
  if (DAT_003fc945 == '\0') {
    uVar5 = 0;
  }
  else {
    iVar2 = (*(code *)&SUB_000658f0)(DAT_003fc93c);
    if (iVar2 < 4) {
      if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
        (**_DAT_003fc914)(0xd,0x32,0);
      }
    }
    else {
      (*(code *)&SUB_00065aac)(local_10,uVar1);
      if ((uint)local_10[0] == (_DAT_003fc940 & 0xff)) {
        uVar3 = (*(code *)&SUB_00fb3178)(2);
        uVar4 = (*(code *)&SUB_00064ab0)();
        uVar5 = (*(code *)&SUB_00fb322c)(uVar4,0,uVar3,2);
      }
      else {
        uVar3 = (*(code *)&SUB_00fb3178)(2);
        uVar4 = (*(code *)&SUB_00064ab0)();
        uVar5 = (*(code *)&SUB_00fb322c)(uVar4,0x3c,uVar3,2);
      }
    }
  }
  return uVar5;
}

