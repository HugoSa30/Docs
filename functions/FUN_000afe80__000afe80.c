/*
 * Program: n42.bin
 * Function: FUN_000afe80
 * Entry: 000afe80
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined FUN_000afe80(short param_1,undefined4 param_2,uint param_3)

{
  undefined uVar1;
  
  if ((param_3 & 0xff) < 4) {
    uVar1 = (*(code *)&SUB_00fb2db8)
                      ((ushort)*(byte *)(_DAT_003fc3e0 + (param_3 & 0xff) + 0xc) * 6 - param_1,
                       param_2,param_3);
  }
  else {
    if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
      (**_DAT_003fc914)(0xd,0xc,param_3 & 0xff);
    }
    uVar1 = 0;
  }
  return uVar1;
}

