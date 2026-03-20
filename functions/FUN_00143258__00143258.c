/*
 * Program: n42.bin
 * Function: FUN_00143258
 * Entry: 00143258
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00143258(void)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  bVar2 = false;
  bVar1 = false;
  dfpmEpclState = 0;
  uVar4 = 0;
  uVar3 = (uint)fcmEnd;
  if (uVar3 != 0) {
    do {
      iVar5 = uVar4 * 0x28;
      if ((((*(ushort *)(&UNK_003fcf4e + iVar5) & 1) == 1) &&
          ((*(ushort *)(&UNK_003fcf4e + iVar5) >> 1 & 1) == 1)) && ((&UNK_003fcf4d)[iVar5] != -1)) {
        (&UNK_003fcf4d)[iVar5] = (&UNK_003fcf4d)[iVar5] + '\x01';
      }
      if ((*(ushort *)(&UNK_003fcf50 + iVar5) >> 3 & 1) == 1) {
        bVar1 = true;
      }
      if ((*(ushort *)(&UNK_003fcf50 + iVar5) >> 4 & 1) == 1) {
        bVar2 = true;
      }
      if (((*(ushort *)(&UNK_003fcf50 + iVar5) >> 6 & 1) == 1) &&
         ((*(ushort *)(&UNK_003fcf4e + iVar5) & 1) == 1)) {
        dfpmEpclState = 1;
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while ((uVar4 < uVar3) && (uVar4 < 0xb));
    if (bVar2) {
      dfpmMilState = 2;
      goto LAB_0014338c;
    }
    if (bVar1) {
      dfpmMilState = 1;
      goto LAB_0014338c;
    }
  }
  dfpmMilState = 0;
LAB_0014338c:
  B_tim = 1;
  FUN_00142f24();
  return;
}

