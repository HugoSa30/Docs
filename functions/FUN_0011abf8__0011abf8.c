/*
 * Program: n42.bin
 * Function: FUN_0011abf8
 * Entry: 0011abf8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0011abf8(int param_1,byte **param_2)

{
  byte bVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  
  pbVar8 = *param_2;
  bVar1 = *(byte *)(param_2 + 3);
  uVar7 = (uint)bVar1;
  uVar6 = (uVar7 + param_1 * -0x20 + 0xff) * 8 & 0x7f8;
  FUN_00119bc4(uVar7);
  cVar4 = FUN_0011a624(param_2);
  if (cVar4 == '\0') {
    **param_2 = 0x11;
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
  }
  else if (*(char *)(uVar6 + 0xfeabd1) == '\0') {
    **param_2 = 0x11;
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
  }
  else {
    *pbVar8 = bVar1;
    *(undefined2 *)(param_2 + 2) = 1;
    uVar5 = 0;
    if (*(char *)(uVar6 + 0xfeabd1) != '\0') {
      do {
        uVar3 = 0;
        if (*(char *)(*(int *)(uVar6 + 0xfeabd4) + uVar5 * 8) != '\0') {
          iVar2 = uVar5 * 8;
          do {
            if (uVar7 == 1) {
              pbVar8[1] = *(byte *)(*(int *)(*(int *)(uVar6 + 0xfeabd4) + iVar2 + 4) + uVar3 + 1);
            }
            else {
              pbVar8[1] = *(byte *)(*(int *)(*(int *)(uVar6 + 0xfeabd4) + iVar2 + 4) + uVar3);
            }
            pbVar8 = pbVar8 + 1;
            uVar3 = uVar3 + 1 & 0xff;
          } while (uVar3 < *(byte *)(*(int *)(uVar6 + 0xfeabd4) + iVar2));
        }
        *(ushort *)(param_2 + 2) =
             *(short *)(param_2 + 2) + (ushort)*(byte *)(*(int *)(uVar6 + 0xfeabd4) + uVar5 * 8);
        uVar5 = uVar5 + 1 & 0xff;
      } while (uVar5 < *(byte *)(uVar6 + 0xfeabd1));
    }
    *(undefined *)((int)param_2 + 10) = 1;
  }
  return;
}

