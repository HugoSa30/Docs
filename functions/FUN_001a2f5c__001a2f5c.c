/*
 * Program: n42.bin
 * Function: FUN_001a2f5c
 * Entry: 001a2f5c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001a2f5c(undefined2 *param_1)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  
  if ((DAT_003fbc78 & 4) == 0) {
    uVar3 = 0;
  }
  else {
    puVar9 = param_1 + 4;
    uVar4 = (uint)DAT_00fa9c80;
    puVar13 = param_1 + 0xb;
    param_1[3] = (ushort)DAT_00fa9c80;
    uVar5 = 0;
    if (uVar4 != 0) {
      pbVar7 = &DAT_00fa9cb0;
      puVar6 = (undefined4 *)&DAT_003fbc20;
      do {
        puVar10 = *(undefined4 **)(pbVar7 + 2);
        puVar12 = puVar10 + 7;
        *puVar9 = (short)uVar5;
        *(undefined4 *)(puVar9 + 1) = *puVar6;
        puVar9[4] = (ushort)*(byte *)((int)puVar6 + 7);
        puVar9[5] = *(undefined2 *)((int)puVar6 + 10);
        puVar9[3] = 0;
        uVar8 = 0;
        if (*pbVar7 != 0) {
          do {
            if (*(byte *)puVar12 != 0) {
              uVar11 = 0;
              puVar2 = puVar13 + -3;
              do {
                puVar13 = puVar2;
                *(undefined4 *)(puVar13 + 4) = *puVar10;
                *(byte *)(puVar13 + 3) = *(byte *)puVar12 - (char)uVar11;
                bVar1 = *(byte *)puVar12;
                puVar10 = puVar10 + (bVar1 - uVar11);
                puVar9[3] = puVar9[3] + 1;
                puVar12 = (undefined4 *)((int)puVar12 + 1);
                uVar11 = (uint)bVar1;
                puVar2 = puVar13 + 3;
              } while (*(byte *)puVar12 != 0);
              puVar13 = puVar13 + 6;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < *pbVar7);
        }
        puVar9 = puVar13;
        puVar13 = puVar9 + 7;
        pbVar7 = pbVar7 + 10;
        puVar6 = puVar6 + 3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
    *param_1 = 0xffff;
    uVar3 = 1;
  }
  return uVar3;
}

