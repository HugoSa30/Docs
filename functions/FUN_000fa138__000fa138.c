/*
 * Program: n42.bin
 * Function: FUN_000fa138
 * Entry: 000fa138
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000fa138(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  short sVar3;
  undefined4 uVar2;
  char cVar4;
  
  if (DAT_003fc955 == '\0') {
    iVar1 = -3;
  }
  else if (_DAT_003fc948 == 0) {
    iVar1 = -3;
  }
  else {
    sVar3 = (*(code *)&SUB_00069f90)(param_1,param_3);
    iVar1 = (int)sVar3;
    if (iVar1 < 0) {
      cVar4 = (char)sVar3;
      if (iVar1 == -1) {
        DAT_003fc97e = DAT_003fc97e + 1;
        if (_DAT_003fc950 < DAT_003fc97e) {
          if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
            (**_DAT_003fc914)(0xd,0x3c,DAT_003fc97e);
          }
        }
      }
    }
    else {
      DAT_003fc97e = 0;
      uVar2 = (*(code *)&SUB_00fb3178)(3);
      (*(code *)&SUB_00fb322c)(param_2,iVar1,uVar2,3);
      cVar4 = DAT_003fc98d;
    }
    iVar1 = (int)cVar4;
  }
  return iVar1;
}

