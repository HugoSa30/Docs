/*
 * Program: n42.bin
 * Function: FUN_000a2050
 * Entry: 000a2050
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined2 FUN_000a2050(char *param_1,ushort param_2,uint param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined2 uVar3;
  bool bVar4;
  ushort *puVar5;
  char *pcVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    puVar5 = (ushort *)(param_3 & 0xfffffffe);
    bVar4 = true;
    if (((param_3 & 1) != 0) && (uVar1 = *puVar5, puVar5 = puVar5 + 1, (uVar1 & 0xff) != 0xff)) {
      bVar4 = false;
    }
    puVar2 = (ushort *)(param_3 + param_2);
    if ((puVar5 < puVar2) && (bVar4)) {
      do {
        if (*puVar5 != 0xffff) {
          bVar4 = false;
        }
        puVar5 = puVar5 + 1;
      } while ((puVar5 < puVar2) && (bVar4));
    }
    if ((((ushort *)((int)puVar2 + -1) == puVar5) && ((*puVar5 & 0xff00) != 0xff00)) || (!bVar4)) {
      uVar3 = 0x200;
    }
    else {
      bVar4 = true;
      pcVar6 = param_1;
      if (param_1 < param_1 + param_2) {
        do {
          if (*pcVar6 != -1) {
            bVar4 = false;
          }
          pcVar6 = pcVar6 + 1;
          if (param_1 + param_2 <= pcVar6) {
            if (bVar4) goto LAB_000a2158;
            break;
          }
        } while (bVar4);
        uVar3 = FUN_000a1d30(param_3,param_1,param_2);
      }
      else {
LAB_000a2158:
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

