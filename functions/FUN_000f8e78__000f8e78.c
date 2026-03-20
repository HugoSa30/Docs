/*
 * Program: n42.bin
 * Function: FUN_000f8e78
 * Entry: 000f8e78
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000f8e78(int param_1,int param_2,int param_3)

{
  char cVar2;
  undefined4 uVar1;
  
  if (param_1 < 6) {
    param_1 = 6;
  }
  (&UNK_003fc728)[param_2 * 0x18] = (char)((uint)(param_1 * 0x3c) / 0x168);
  (&UNK_003fc72e)[param_2 * 0x18] = (char)((uint)(param_1 * 0x3c00) / 0x168);
  if ((param_3 == 1) && (cVar2 = (*(code *)&SUB_00068a0c)(param_2), cVar2 == '\0')) {
    (*(code *)&SUB_00fb0fbc)(0x39,param_2);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

