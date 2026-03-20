/*
 * Program: n42.bin
 * Function: FUN_001091a4
 * Entry: 001091a4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001091a4(int param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint **ppuVar3;
  
  _5();
  ppuVar3 = *(uint ***)(param_1 + 4);
  if (param_3 == 0) {
    for (; *ppuVar3 != (uint *)0x0; ppuVar3 = (uint **)(*ppuVar3)[3]) {
      puVar2 = *ppuVar3;
      while (puVar2 == param_2) {
        puVar2 = *(uint **)(*ppuVar3)[3];
        *ppuVar3 = puVar2;
        if (puVar2 == (uint *)0x0) goto LAB_00109268;
      }
    }
  }
  else {
    if (*ppuVar3 != (uint *)0x0) {
      uVar1 = **ppuVar3;
      while (uVar1 < *param_2) {
        ppuVar3 = (uint **)(*ppuVar3)[3];
        if (*ppuVar3 == (uint *)0x0) break;
        uVar1 = **ppuVar3;
      }
    }
    if (*ppuVar3 != param_2) {
      *(uint **)param_2[3] = *ppuVar3;
      *ppuVar3 = param_2;
    }
  }
LAB_00109268:
  _6();
  return;
}

