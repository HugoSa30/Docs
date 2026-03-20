/*
 * Program: n42.bin
 * Function: FUN_000f2950
 * Entry: 000f2950
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f2950(void)

{
  int iVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  byte *pbVar5;
  undefined local_50 [4];
  undefined auStack_4c [56];
  
  uVar4 = 0;
  if (DAT_00016ec8 != 0) {
    do {
      (*_DAT_003f9a60)(*(undefined4 *)(&DAT_00016e70 + uVar4 * 0x2c));
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < DAT_00016ec8);
  }
  uVar4 = 0;
  if (DAT_000174f0 != 0) {
    do {
      iVar1 = uVar4 * 0x10;
      if (*(short *)(&UNK_003fa5ba + uVar4 * 2) == 0 &&
          *(short *)(&UNK_003fa5ba + (uint)*(byte *)(iVar1 + 0x1743c) * 2) == 0) {
        cVar2 = (**(code **)(iVar1 + 0x17434))(*(undefined4 *)(iVar1 + 0x17438),auStack_4c);
        if (cVar2 < '\x01') {
          if (cVar2 < '\0') {
            sVar3 = *(short *)(iVar1 + 0x1743e) + (short)cVar2;
            *(short *)(&UNK_003fa5ba + uVar4 * 2) = sVar3;
            cVar2 = (*(code *)&SUB_00013858)(sVar3,local_50);
            if (cVar2 == '\0') {
              *(undefined2 *)(&UNK_003fa5ba + uVar4 * 2) = 0;
              pbVar5 = (byte *)(**(int **)(iVar1 + 0x17438) + 0x23);
              *pbVar5 = *pbVar5 | 6;
              DAT_003fa213 = local_50[0];
            }
          }
        }
        else {
          sVar3 = *(short *)(iVar1 + 0x1743e) - (short)cVar2;
          *(short *)(&UNK_003fa5ba + uVar4 * 2) = sVar3;
          cVar2 = (*(code *)&SUB_00013af0)(sVar3,1,cVar2,auStack_4c,local_50);
          if (cVar2 == '\0') {
            *(undefined2 *)(&UNK_003fa5ba + uVar4 * 2) = 0;
            pbVar5 = (byte *)(**(int **)(iVar1 + 0x17438) + 0x23);
            *pbVar5 = *pbVar5 | 6;
            DAT_003fa213 = local_50[0];
          }
          else {
            cVar2 = (*(code *)&SUB_00013858)(*(undefined2 *)(&UNK_003fa5ba + uVar4 * 2),local_50);
            if (cVar2 == '\0') {
              *(undefined2 *)(&UNK_003fa5ba + uVar4 * 2) = 0;
              pbVar5 = (byte *)(**(int **)(iVar1 + 0x17438) + 0x23);
              *pbVar5 = *pbVar5 | 6;
              DAT_003fa213 = local_50[0];
            }
          }
        }
      }
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < DAT_000174f0);
  }
  return;
}

