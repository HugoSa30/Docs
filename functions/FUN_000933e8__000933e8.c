/*
 * Program: n42.bin
 * Function: FUN_000933e8
 * Entry: 000933e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined2 FUN_000933e8(char *param_1,ushort param_2,uint param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  bool bVar3;
  ushort *puVar4;
  char *pcVar5;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    puVar4 = (ushort *)(param_3 & 0xfffffffe);
    bVar3 = true;
    if (((param_3 & 1) != 0) && (uVar1 = *puVar4, puVar4 = puVar4 + 1, (uVar1 & 0xff) != 0xff)) {
      bVar3 = false;
    }
    while ((puVar4 < (ushort *)(param_3 + param_2) && (bVar3))) {
      if (*puVar4 != 0xffff) {
        bVar3 = false;
      }
      puVar4 = puVar4 + 1;
    }
    if (((ushort *)((int)(ushort *)(param_3 + param_2) + -1) == puVar4) &&
       ((*puVar4 & 0xff00) != 0xff00)) {
      bVar3 = false;
    }
    if (bVar3) {
      bVar3 = true;
      pcVar5 = param_1;
      if (param_1 < param_1 + param_2) {
        do {
          if (*pcVar5 != -1) {
            bVar3 = false;
          }
          pcVar5 = pcVar5 + 1;
        } while ((pcVar5 < param_1 + param_2) && (bVar3));
        if (!bVar3) {
          uVar2 = FUN_00093110(param_3,param_1,param_2);
          return uVar2;
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0x200;
    }
  }
  return uVar2;
}

