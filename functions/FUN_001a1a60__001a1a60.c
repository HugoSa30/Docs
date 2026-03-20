/*
 * Program: n42.bin
 * Function: FUN_001a1a60
 * Entry: 001a1a60
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_001a1a60(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  char cVar12;
  undefined4 *puVar13;
  
  iVar6 = param_1 * 0xc;
  puVar2 = *(undefined4 **)(&DAT_00fa9cb2 + param_1 * 10);
  bVar8 = *(byte *)(param_1 * 10 + 0xfa9cb1);
  uVar9 = 1;
  if (((DAT_003fbc78 & 2) != 0) && ((&DAT_003fbc28)[iVar6] == '\0')) {
    if ((&UNK_003fbc25)[iVar6] == ' ') {
      (&UNK_003fbc26)[iVar6] = bVar8;
      cVar3 = DAT_00fa9cae;
      do {
        bVar1 = true;
        uVar4 = 0;
        puVar10 = puVar2 + 7;
        uVar11 = 0;
        do {
          ((byte *)((int)puVar2 + 0x23))[uVar11] = 0;
          uVar11 = uVar11 + 1 & 0xff;
        } while (uVar11 < 8);
        *(byte *)((int)puVar2 + 0x23) = bVar8;
        puVar13 = puVar2 + 9;
        bVar8 = bVar8 + 1;
        cVar12 = '\0';
        puVar5 = puVar2;
        do {
          iVar7 = *(byte *)puVar10 - uVar4;
          if (iVar7 == 1) {
            *(undefined *)puVar13 = *(undefined *)*puVar5;
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          else if (iVar7 == 2) {
            *(undefined2 *)puVar13 = *(undefined2 *)*puVar5;
            puVar13 = (undefined4 *)((int)puVar13 + 2);
          }
          else if (iVar7 == 4) {
            *puVar13 = *(undefined4 *)*puVar5;
            puVar13 = puVar13 + 1;
          }
          else {
            bVar1 = false;
          }
          puVar5 = puVar5 + 1;
          cVar12 = cVar12 + '\x01';
          if (cVar12 == cVar3) {
            bVar1 = false;
          }
          uVar4 = (uint)*(byte *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        } while (bVar1);
        puVar2 = (undefined4 *)((int)puVar2 + 0x2b);
      } while (bVar8 <= (byte)(&DAT_003fbc27)[iVar6]);
      (&UNK_003fbc25)[iVar6] = 0x10;
      uVar9 = 0;
    }
    else {
      uVar9 = 2;
    }
  }
  if (((&DAT_003fbc24)[iVar6] & 0x80) == 0) {
    cVar3 = -1;
    (&DAT_003fbc29)[iVar6] = 0xff;
  }
  else if ((&DAT_003fbc28)[iVar6] == '\0') {
    cVar3 = (&DAT_003fbc29)[iVar6];
  }
  else {
    cVar3 = (&DAT_003fbc28)[iVar6] + -1;
  }
  (&DAT_003fbc28)[iVar6] = cVar3;
  return uVar9;
}

