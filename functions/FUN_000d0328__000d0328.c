/*
 * Program: n42.bin
 * Function: FUN_000d0328
 * Entry: 000d0328
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d0328(void)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  
  if (B_stend == '\0') {
    DAT_005b8ccb = 0;
  }
  else {
    uVar8 = 0;
    uVar2 = (ushort)vfzg;
    uVar3 = (uint)nvquot_w;
    do {
      uVar4 = 1 << (uVar8 & 0x3f);
      if (uVar8 == 0) {
        uVar9 = (uint)_DAT_001c1c6a;
      }
      else if (uVar8 < 6) {
        uVar9 = (uint)*(ushort *)(&DAT_001c1c6a + uVar8 * 2);
      }
      else {
        uVar9 = (uint)_DAT_001c1c74;
      }
      if (uVar8 == 0) {
        uVar5 = (uint)_DAT_001c1c8e;
      }
      else if (uVar8 < 6) {
        uVar5 = (uint)*(ushort *)(&DAT_001c1c8e + uVar8 * 2);
      }
      else {
        uVar5 = (uint)_DAT_001c1c98;
      }
      bVar1 = (byte)uVar4;
      if (uVar3 < uVar9 + uVar5) {
        if (uVar8 == 0) {
          uVar9 = (uint)_DAT_001c1c6a;
        }
        else if (uVar8 < 6) {
          uVar9 = (uint)*(ushort *)(&DAT_001c1c6a + uVar8 * 2);
        }
        else {
          uVar9 = (uint)_DAT_001c1c74;
        }
        if (uVar8 == 0) {
          uVar5 = (uint)_DAT_001c1c8e;
        }
        else if (uVar8 < 6) {
          uVar5 = (uint)*(ushort *)(&DAT_001c1c8e + uVar8 * 2);
        }
        else {
          uVar5 = (uint)_DAT_001c1c98;
        }
        if ((int)uVar3 <= (int)(uVar9 - uVar5)) goto LAB_000d0490;
        DAT_005b909b = DAT_005b909b | bVar1;
        uVar6 = _DAT_001c1ca6;
        if ((uVar8 != 0) && (uVar6 = _DAT_001c1cb0, uVar8 < 6)) {
          uVar6 = *(undefined2 *)(&DAT_001c1ca6 + uVar8 * 2);
        }
        *(undefined2 *)(&UNK_003fab18 + uVar8 * 2) = uVar6;
      }
      else {
LAB_000d0490:
        if (*(short *)(&UNK_003fab18 + uVar8 * 2) == 0) {
          DAT_005b909b = DAT_005b909b & ~bVar1;
        }
        else {
          *(short *)(&UNK_003fab18 + uVar8 * 2) = *(short *)(&UNK_003fab18 + uVar8 * 2) + -1;
          DAT_005b909b = DAT_005b909b | bVar1;
        }
      }
      uVar10 = _DAT_001c1c9a;
      if ((uVar8 != 0) && (uVar10 = _DAT_001c1ca4, uVar8 < 6)) {
        uVar10 = *(ushort *)(&DAT_001c1c9a + uVar8 * 2);
      }
      if (uVar10 < uVar2) {
        sVar7 = _DAT_001c1c82;
        if ((uVar8 != 0) && (sVar7 = _DAT_001c1c8c, uVar8 < 6)) {
          sVar7 = *(short *)(&DAT_001c1c82 + uVar8 * 2);
        }
        if (sVar7 <= (short)ngfil_w) goto LAB_000d0608;
        sVar7 = _DAT_001c1c76;
        if ((uVar8 != 0) && (sVar7 = _DAT_001c1c80, uVar8 < 6)) {
          sVar7 = *(short *)(&DAT_001c1c76 + uVar8 * 2);
        }
        if (((short)ngfil_w <= sVar7) || ((DAT_005b909b & uVar4) == 0)) goto LAB_000d0608;
        if (*(short *)(&UNK_003fab0c + uVar8 * 2) == 0) {
          DAT_005b909c = DAT_005b909c | bVar1;
        }
        else {
          *(short *)(&UNK_003fab0c + uVar8 * 2) = *(short *)(&UNK_003fab0c + uVar8 * 2) + -1;
          DAT_005b909c = DAT_005b909c & ~bVar1;
        }
      }
      else {
LAB_000d0608:
        DAT_005b909c = DAT_005b909c & ~bVar1;
        uVar6 = _DAT_001c1cb2;
        if ((uVar8 != 0) && (uVar6 = _DAT_001c1cbc, uVar8 < 6)) {
          uVar6 = *(undefined2 *)(&DAT_001c1cb2 + uVar8 * 2);
        }
        *(undefined2 *)(&UNK_003fab0c + uVar8 * 2) = uVar6;
      }
      uVar4 = uVar8 + 1;
      uVar8 = uVar4 & 0xff;
    } while (uVar8 < 6);
    DAT_005b909a = (undefined)uVar4;
    if (DAT_005b909c == 0) {
      DAT_005b8ccb = 1;
    }
    else {
      DAT_005b8ccb = 0;
    }
  }
  return;
}

