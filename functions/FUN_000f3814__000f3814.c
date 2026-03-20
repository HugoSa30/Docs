/*
 * Program: n42.bin
 * Function: FUN_000f3814
 * Entry: 000f3814
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_000f3814(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  
  iVar4 = *param_1;
  cVar5 = '\0';
  uVar3 = *(uint *)(iVar4 + 0xc);
  if ((uVar3 != 0) || (*(int *)(iVar4 + 0x14) != 0)) {
    uVar6 = 0;
    bVar1 = *(byte *)((int)param_1 + 0x22);
    if (bVar1 != 0) {
      bVar2 = *(byte *)((int)param_1 + 0x23);
      do {
        if ((uVar3 >> ((uVar6 & 7) << 3) & 0xff) != 0) {
          *(ushort *)(param_2 + cVar5 * 2) =
               (ushort)*(byte *)(param_1[3] + uVar6) << 8 |
               (ushort)(*(uint *)(iVar4 + 0x10) >> ((uVar6 & 7) << 3)) & 0xff;
          cVar5 = cVar5 + '\x01';
        }
        if ((uVar6 < bVar2) && ((*(uint *)(iVar4 + 0x14) >> ((uVar6 & 7) << 3) & 0xff) != 0)) {
          *(ushort *)(param_2 + cVar5 * 2) =
               (ushort)*(byte *)(param_1[4] + uVar6) << 8 |
               ~(ushort)(*(uint *)(iVar4 + 0x18) >> ((uVar6 & 7) << 3)) & 0xff;
          cVar5 = cVar5 + '\x01';
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < bVar1);
    }
  }
  return (int)cVar5;
}

