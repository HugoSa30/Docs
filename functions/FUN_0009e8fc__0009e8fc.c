/*
 * Program: n42.bin
 * Function: FUN_0009e8fc
 * Entry: 0009e8fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009e8fc(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  short *psVar11;
  
  if (_DAT_003fa174 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    param_1 = param_1 * 0x10;
    uVar6 = *(undefined4 *)(&DAT_003fa13c + param_1);
    uVar9 = 0;
    do {
      iVar7 = (uint)uVar9 * 4;
      if ((*(byte *)(iVar7 + 0xec02) & 3) != 0) {
        if (((*(byte *)(iVar7 + 0xec02) & 2) == 0) ||
           (iVar5 = *(int *)((uint)uVar9 * 8 + 0xebf8), sVar2 = FUN_0009d6e4((uint)uVar9,iVar5),
           sVar2 == *(short *)(iVar5 + -2))) {
          psVar11 = *(short **)(&UNK_003fa130 + iVar7);
          if (psVar11 == (short *)0x0) {
            (&UNK_003fa134)[uVar9] = (&UNK_003fa134)[uVar9] | 0x40;
            uVar1 = 0;
          }
          else {
            iVar5 = FUN_0009d8d8(uVar9,uVar6,psVar11);
            if ((iVar5 == 0) ||
               (cVar3 = FUN_0009d504((uint)uVar9,*(undefined4 *)((uint)uVar9 * 8 + 0xebf8),iVar5 + 8
                                    ), cVar3 == '\0')) {
              if (*psVar11 == -1) {
                _DAT_003fa174 =
                     FUN_0009d438(uVar9,_DAT_003fa174,*(undefined4 *)(&DAT_003fa144 + param_1));
                if (_DAT_003fa174 == 0) {
                  _DAT_003fa174 = 0;
                  return 0;
                }
                cVar3 = FUN_0009e0d4((uint)uVar9,_DAT_003fa174,
                                     *(undefined4 *)((uint)uVar9 * 8 + 0xebf8),
                                     &DAT_003fa138 + param_1);
                if (cVar3 == '\0') {
                  (&UNK_003fa134)[uVar9] = (&UNK_003fa134)[uVar9] | 0x80;
                  uVar1 = 0;
                }
                else {
                  cVar3 = FUN_0009e828(psVar11,_DAT_003fa174,&DAT_003fa138 + param_1);
                  if (cVar3 == '\0') {
                    (&UNK_003fa134)[uVar9] = (&UNK_003fa134)[uVar9] | 0x80;
                    uVar1 = 0;
                  }
                }
                pbVar4 = &UNK_003fa134 + uVar9;
                *pbVar4 = *pbVar4 | 4;
                uVar8 = *(uint *)(&DAT_003fa144 + param_1);
                iVar5 = FUN_0009ce30((uint)uVar9,psVar11,uVar8);
                if (iVar5 == 0) {
                  *pbVar4 = *pbVar4 | 0x80;
                  uVar1 = 0;
                }
                else {
                  *(int *)(&UNK_003fa130 + iVar7) = iVar5;
                }
                iVar7 = _DAT_003fa174 + (uint)(*(ushort *)(iVar7 + 0xec00) >> 1) * 2;
                _DAT_003fa174 = iVar7 + 8;
                if (uVar8 < iVar7 + 0x108U) {
                  uVar1 = 0;
                }
              }
              else {
                (&UNK_003fa134)[uVar9] = (&UNK_003fa134)[uVar9] | 0x20;
                uVar1 = 0;
              }
            }
          }
        }
        else {
          (&UNK_003fa134)[uVar9] = (&UNK_003fa134)[uVar9] | 8;
        }
      }
      uVar10 = uVar9 + 1;
      uVar6 = FUN_0009cdd4(uVar9,uVar6);
      uVar9 = uVar10;
    } while (uVar10 == 0);
  }
  return uVar1;
}

