/*
 * Program: n42.bin
 * Function: FUN_000b6098
 * Entry: 000b6098
 * Exported by: ExportAllDecompiledFunctions.java
 */


double FUN_000b6098(int param_1,int param_2)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  do {
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_2 + uVar3 * 4);
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 5);
  bVar2 = 0;
  do {
    uVar3 = (uint)bVar2;
    for (uVar4 = bVar2 + 1; uVar4 < 5; uVar4 = uVar4 + 1 & 0xffff) {
      if (*(float *)(param_1 + uVar4 * 4) < *(float *)(param_1 + uVar3 * 4)) {
        uVar3 = uVar4 & 0xff;
      }
    }
    fVar1 = *(float *)(param_1 + uVar3 * 4);
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + (uint)bVar2 * 4);
    bVar2 = bVar2 + 1;
  } while (bVar2 < 3);
  return (double)fVar1;
}

