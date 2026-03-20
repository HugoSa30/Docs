/*
 * Program: n42.bin
 * Function: FUN_00116f50
 * Entry: 00116f50
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00116f50(undefined4 param_1,char **param_2)

{
  char cVar1;
  ushort local_10;
  
  if (*(short *)((int)param_2 + 6) == 2) {
    cVar1 = (*param_2)[1];
    local_10 = CONCAT11(**param_2,cVar1);
    if (((**param_2 == -1) && ((cVar1 == -1 || (cVar1 == -5)))) || (local_10 - 10000 < 0x35fc)) {
      cVar1 = FUN_00135ca4();
      if (cVar1 != '\0') {
        *(undefined2 *)(param_2 + 2) = 2;
        *(undefined *)((int)param_2 + 10) = 1;
        return;
      }
      **param_2 = '\x10';
    }
    else {
      **param_2 = '\x12';
    }
  }
  else {
    **param_2 = '\x12';
  }
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined *)((int)param_2 + 10) = 2;
  return;
}

