/*
 * Program: n42.bin
 * Function: FUN_000f997c
 * Entry: 000f997c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4
FUN_000f997c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6)

{
  if ((param_6 & 0xff) < 4) {
    if (1 < *(int *)(&UNK_003fc888 + (param_6 & 0xff) * 0x10)) {
      (*(code *)&SUB_00069848)(param_1,param_6);
      (*(code *)&SUB_00069638)(param_2,param_6);
      (*(code *)&SUB_00069714)(param_3,param_6);
      (*(code *)&SUB_0006955c)(param_4,param_6);
      (*(code *)&SUB_00069454)(param_5,param_6);
      return 1;
    }
    (*(code *)&SUB_00fb1cdc)(0x35);
  }
  else {
    (*(code *)&SUB_00fb1cdc)(0x33);
  }
  return 0;
}

