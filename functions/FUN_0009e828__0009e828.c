/*
 * Program: n42.bin
 * Function: FUN_0009e828
 * Entry: 0009e828
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_0009e828(uint param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  undefined2 *puVar4;
  undefined2 local_18 [6];
  
  if ((((param_1 < *(uint *)(param_3 + 4)) || (*(uint *)(param_3 + 0xc) <= param_1)) ||
      (param_2 < *(uint *)(param_3 + 8))) || (*(uint *)(param_3 + 0xc) <= param_2)) {
    uVar1 = 0;
  }
  else if (param_1 < param_2) {
    local_18[0] = (short)((int)(param_2 - param_1) >> 1);
    puVar4 = local_18;
    sVar3 = 0;
    do {
      cVar2 = FUN_000b126c(param_1,*puVar4);
      if (cVar2 == '\0') {
        return 0;
      }
      param_1 = param_1 + 2;
      puVar4 = puVar4 + 1;
      sVar3 = sVar3 + 1;
    } while (sVar3 == 0);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

