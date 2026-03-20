/*
 * Program: n42.bin
 * Function: FUN_001197a8
 * Entry: 001197a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001197a8(int *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = 0;
  uVar4 = 0;
  do {
    bVar1 = bVar1 + ((&DAT_003fe8b2)[uVar4 * 0xc] != '\0');
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 10);
  *(byte *)(*param_1 + 2) = bVar1;
  if (bVar1 == 0) {
    *(undefined2 *)(param_1 + 2) = 3;
  }
  else {
    if (bVar1 == 10) {
      if (DAT_003fe92a == '\t') {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)(byte)(DAT_003fe92a + 1);
      }
    }
    else {
      uVar4 = 0;
    }
    uVar5 = 3;
    bVar2 = 0;
    if (bVar1 != 0) {
      do {
        iVar3 = uVar4 * 0xc;
        *(char *)(*param_1 + (uVar5 & 0xff)) =
             (char)((ushort)*(undefined2 *)(&CDKAAA + (uint)(byte)(&DAT_003fe8b2)[iVar3] * 2) >> 8);
        *(char *)(*param_1 + (uVar5 + 1 & 0xff)) =
             (char)*(undefined2 *)(&CDKAAA + (uint)(byte)(&DAT_003fe8b2)[iVar3] * 2);
        *(char *)(*param_1 + (uVar5 + 2 & 0xff)) = (char)*(undefined2 *)(&UNK_003fe8b4 + iVar3);
        *(undefined *)(*param_1 + (uVar5 + 3 & 0xff)) = (&UNK_003fe8b6)[iVar3];
        *(undefined *)(*param_1 + (uVar5 + 4 & 0xff)) = (&UNK_003fe8b7)[iVar3];
        *(undefined *)(*param_1 + (uVar5 + 5 & 0xff)) = (&UNK_003fe8b8)[iVar3];
        *(undefined *)(*param_1 + (uVar5 + 6 & 0xff)) = (&UNK_003fe8b9)[iVar3];
        *(undefined *)(*param_1 + (uVar5 + 7 & 0xff)) = (&UNK_003fe8ba)[iVar3];
        *(undefined *)(*param_1 + (uVar5 + 8 & 0xff)) = (&UNK_003fe8bb)[iVar3];
        *(undefined *)(*param_1 + (uVar5 + 9 & 0xff)) = (&UNK_003fe8bc)[iVar3];
        *(undefined *)(*param_1 + (uVar5 + 10 & 0xff)) = (&CLAAAA)[(byte)(&DAT_003fe8b2)[iVar3]];
        *(undefined *)(*param_1 + (uVar5 + 0xb & 0xff)) = 0;
        uVar5 = uVar5 + 0xc;
        uVar4 = uVar4 + 1 & 0xff;
        if (uVar4 == 10) {
          uVar4 = 0;
        }
        bVar2 = bVar2 + 1;
      } while (bVar2 != bVar1);
    }
    *(ushort *)(param_1 + 2) = (ushort)bVar1 * 0xc + 3;
  }
  return;
}

