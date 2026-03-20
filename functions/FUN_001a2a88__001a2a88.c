/*
 * Program: n42.bin
 * Function: FUN_001a2a88
 * Entry: 001a2a88
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001a2a88(uint param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  undefined uVar17;
  uint in_MSR;
  
  iVar6 = _DAT_003fbc7c;
  uVar16 = (uint)*(byte *)(_DAT_003fbc7c + 3);
  if ((int)(DAT_00fa9c80 - 1) < (int)uVar16) {
    uVar17 = 0x32;
  }
  else {
    iVar12 = uVar16 * 10;
    iVar11 = uVar16 * 0xc;
    cVar15 = *(char *)(iVar12 + 0xfa9cb1);
    uVar13 = (byte)(&DAT_003fbc24)[iVar11] & 0xffffff81 | DAT_003fbc78 & 2;
    uVar5 = (uint)*(byte *)(_DAT_003fbc7c + 2) << 2;
    uVar16 = uVar13 | uVar5 & 0xff;
    if (((byte)(&DAT_003fbc24)[iVar11] & 1 | DAT_003fbc78 & 2) == 3) {
      if (uVar16 == 7) {
        uVar8 = param_1;
        if ((byte)(&DAT_00fa9cb0)[iVar12] <= *(byte *)(_DAT_003fbc7c + 4)) {
LAB_001a2cf8:
          param_1 = uVar8;
          uVar17 = 0x32;
          goto LAB_001a2dd4;
        }
        _DAT_003fb9bc = _DAT_002fc014;
        _DAT_002fc014 = 0;
        uVar8 = in_MSR >> 0xe & 1;
        uVar3 = (in_MSR >> 0xf & 1 | uVar8) << 0xf;
        uVar4 = (in_MSR >> 5 & 1 | uVar8) << 5;
        uVar14 = (in_MSR >> 4 & 1 | uVar8) << 4;
        param_1 = in_MSR & 0x9030 | in_MSR & 0xffff6fcf | uVar3 | uVar4 | uVar14;
        (&DAT_003fbc27)[iVar11] = *(char *)(_DAT_003fbc7c + 4) + cVar15;
        (&UNK_003fbc26)[iVar11] = cVar15;
        if (*(short *)(iVar6 + 6) == 0) {
          *(undefined2 *)(iVar6 + 6) = 1;
        }
        uVar9 = (uint)*(ushort *)(iVar12 + 0xfa9cb6);
        uVar7 = uVar9 * *(ushort *)(iVar6 + 6);
        uVar8 = 0xffff;
        if ((uVar7 & 0xffff) == 0xffff) {
          if (uVar9 != 0xffff) goto LAB_001a2cf8;
          *(undefined2 *)(&DAT_003fbc2a + iVar11) = 0xffff;
          cVar10 = '\0';
        }
        else {
          if (uVar9 == 0xffff) goto LAB_001a2cf8;
          uVar8 = uVar9 + uVar9 * ((uVar7 + 0xffff & 0xffff) / uVar9);
          *(short *)(&DAT_003fbc2a + iVar11) = (short)uVar8;
          cVar10 = (char)((uVar8 & 0xffff) / uVar9) + -1;
        }
        (&DAT_003fbc29)[iVar11] = cVar10;
        (&DAT_003fbc28)[iVar11] = 1;
        (&DAT_003fbc24)[iVar11] = (&DAT_003fbc24)[iVar11] | 0x80;
        _DAT_002fc014 = _DAT_003fb9bc;
        uVar8 = (in_MSR & 0x4000) >> 0xe;
        in_MSR = in_MSR & 0x9030 | uVar3 | uVar4 | uVar14 |
                 in_MSR & 0xffff6fcf | (param_1 >> 0xf & 1 | uVar8) << 0xf |
                 (param_1 >> 5 & 1 | uVar8) << 5 | (param_1 >> 4 & 1 | uVar8) << 4;
        _DAT_003fbc84[1] = 0;
      }
      if (uVar16 == 0x87) {
        _DAT_003fb9bc = _DAT_002fc014;
        uVar8 = in_MSR >> 0xe & 1;
        uVar3 = (in_MSR >> 0xf & 1 | uVar8) << 0xf;
        uVar4 = (in_MSR >> 5 & 1 | uVar8) << 5;
        uVar8 = (in_MSR >> 4 & 1 | uVar8) << 4;
        param_1 = in_MSR & 0x9030 | in_MSR & 0xffff6fcf | uVar3 | uVar4 | uVar8;
        bVar1 = (&DAT_003fbc24)[iVar11];
        (&DAT_003fbc24)[iVar11] = bVar1 & 0x7f;
        (&DAT_003fbc28)[iVar11] = 2;
        (&DAT_003fbc27)[iVar11] = *(char *)(iVar6 + 4) + cVar15;
        uVar2 = *(ushort *)(iVar12 + 0xfa9cb6);
        uVar14 = (uint)uVar2;
        if (uVar14 == 0xffff) {
          *(undefined2 *)(&DAT_003fbc2a + iVar11) = 0xffff;
          cVar15 = '\0';
        }
        else {
          *(ushort *)(&DAT_003fbc2a + iVar11) =
               uVar2 + uVar2 * (short)((uVar14 + 0xffff & 0xffff) / uVar14);
          cVar15 = (char)*(undefined2 *)(iVar6 + 6) + -1;
        }
        (&DAT_003fbc29)[iVar11] = cVar15;
        (&DAT_003fbc28)[iVar11] = 1;
        (&DAT_003fbc24)[iVar11] = bVar1 & 0x7f | 0x80;
        _DAT_002fc014 = _DAT_003fb9bc;
        uVar14 = (in_MSR & 0x4000) >> 0xe;
        in_MSR = in_MSR & 0x9030 | uVar3 | uVar4 | uVar8 |
                 in_MSR & 0xffff6fcf | (param_1 >> 0xf & 1 | uVar14) << 0xf |
                 (param_1 >> 5 & 1 | uVar14) << 5 | (param_1 >> 4 & 1 | uVar14) << 4;
        _DAT_003fbc84[1] = 0;
      }
      if (uVar16 == 0x83) {
        _DAT_003fb9bc = _DAT_002fc014;
        uVar16 = in_MSR >> 0xe & 1;
        param_1 = in_MSR & 0x9030 |
                  in_MSR & 0xffff6fcf | (in_MSR >> 0xf & 1 | uVar16) << 0xf |
                  (in_MSR >> 5 & 1 | uVar16) << 5 | (in_MSR >> 4 & 1 | uVar16) << 4;
        (&DAT_003fbc24)[iVar11] = (&DAT_003fbc24)[iVar11] & 0x7f;
        (&DAT_003fbc28)[iVar11] = 0xff;
        (&DAT_003fbc29)[iVar11] = 0xff;
        _DAT_002fc014 = _DAT_003fb9bc;
        _DAT_003fbc84[1] = 0;
      }
      if (((uVar13 | uVar5) & 0x84) != 0) goto LAB_001a2ddc;
      uVar17 = 0;
    }
    else {
      uVar17 = 0x22;
    }
  }
LAB_001a2dd4:
  _DAT_003fbc84[1] = uVar17;
LAB_001a2ddc:
  *_DAT_003fbc84 = 0xff;
  return param_1;
}

