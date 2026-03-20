/*
 * Program: n42.bin
 * Function: FUN_000f5990
 * Entry: 000f5990
 * Exported by: ExportAllDecompiledFunctions.java
 */


bool FUN_000f5990(undefined2 *param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  param_3 = param_3 * 0x70;
  cVar1 = (&UNK_003fc455)[param_3];
  if (cVar1 != '\0') {
    *param_1 = *(undefined2 *)(&UNK_003fc434 + param_3);
    uVar2 = *(undefined4 *)(&UNK_003fc3ec + param_3);
    *param_2 = *(undefined4 *)(&UNK_003fc3e8 + param_3);
    param_2[1] = uVar2;
    (&UNK_003fc455)[param_3] = 1;
  }
  return cVar1 != '\0';
}

