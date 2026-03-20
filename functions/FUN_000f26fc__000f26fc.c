/*
 * Program: n42.bin
 * Function: FUN_000f26fc
 * Entry: 000f26fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000f26fc(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined local_50;
  undefined local_4f [3];
  undefined auStack_4c [56];
  
  uVar3 = 0;
  if (DAT_000174f2 != 0) {
    do {
      iVar4 = uVar3 * 0xc;
      uVar1 = (*(code *)&SUB_0001411c)(*(undefined2 *)(iVar4 + 0x174c8));
      if ((uVar1 & 0xa4) == 0x20) {
        cVar2 = (*(code *)&SUB_00013a0c)(*(undefined2 *)(iVar4 + 0x174c8),&local_50,local_4f);
        if (cVar2 == '\0') {
          pbVar5 = (byte *)(**(int **)(iVar4 + 0x174c4) + 0x23);
          *pbVar5 = *pbVar5 | 6;
          DAT_003fa213 = local_4f[0];
        }
        else {
          (**(code **)(iVar4 + 0x174c0))(*(undefined4 *)(iVar4 + 0x174c4),local_50);
        }
      }
      else if ((uVar1 & 0x80) != 0) {
        pbVar5 = (byte *)(**(int **)(iVar4 + 0x174c4) + 0x23);
        *pbVar5 = *pbVar5 | 6;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < DAT_000174f2);
  }
  uVar3 = 0;
  if (DAT_000174f0 != 0) {
    do {
      if (*(short *)(&UNK_003fa5ba + uVar3 * 2) != 0) {
        uVar1 = (*(code *)&SUB_0001411c)(*(short *)(&UNK_003fa5ba + uVar3 * 2));
        if ((uVar1 & 0xa4) == 0x20) {
          cVar2 = (*(code *)&SUB_00013dbc)
                            (*(undefined2 *)(&UNK_003fa5ba + uVar3 * 2),0,0x17,auStack_4c,local_4f);
          if (cVar2 == '\0') {
            pbVar5 = (byte *)(**(int **)(uVar3 * 0x10 + 0x17438) + 0x23);
            *pbVar5 = *pbVar5 | 6;
            DAT_003fa213 = local_4f[0];
          }
          else {
            (**(code **)(uVar3 * 0x10 + 0x17430))
                      (*(undefined4 *)(uVar3 * 0x10 + 0x17438),auStack_4c);
          }
          *(undefined2 *)(&UNK_003fa5ba + uVar3 * 2) = 0;
        }
        else if ((uVar1 & 0x80) != 0) {
          pbVar5 = (byte *)(**(int **)(uVar3 * 0x10 + 0x17438) + 0x23);
          *pbVar5 = *pbVar5 | 6;
          *(undefined2 *)(&UNK_003fa5ba + uVar3 * 2) = 0;
        }
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < DAT_000174f0);
  }
  return;
}

