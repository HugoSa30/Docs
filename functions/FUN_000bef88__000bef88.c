/*
 * Program: n42.bin
 * Function: FUN_000bef88
 * Entry: 000bef88
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bef88(void)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  ushort uVar11;
  uint uVar12;
  
  if (DAT_001cf9e8 <= nmot) {
    return;
  }
  if (tmot <= DAT_001cf9eb) {
    return;
  }
  DAT_005b8e04 = zzyllfb;
  if ((((((B_stend == '\0') || (DAT_001cf9ed <= tmot)) || (tmot <= DAT_001cf9ec)) ||
       ((B_ll == '\0' || (DAT_001cf9e9 <= nmot)))) || (2 < DAT_005b8e02)) ||
     ((vfzg != 0 || (DAT_001cf9ea <= nstat)))) {
    DAT_003fabf9 = '\0';
  }
  else if (((((B_stend != '\0') && (tmot < DAT_001cf9ed)) && (DAT_001cf9ec < tmot)) &&
           (((B_ll != '\0' && (nmot < DAT_001cf9e9)) &&
            ((DAT_005b8e02 < 3 && ((nstat < DAT_001cf9ea && (B_gd == '\0')))))))) &&
          (Btvdpsrlvw == 0)) {
    DAT_003fabf9 = '\x01';
  }
  if (DAT_003fabf9 == '\0') {
    DAT_005b87c8 = DAT_005b87c8 & 0xfe;
  }
  else {
    DAT_005b87c8 = DAT_005b87c8 | 1;
  }
  if ((uint)(_DAT_001cf9e4 >> 5) << 7 < (uint)DAT_005b98b8 << 1) {
    DAT_003fabf6 = '\0';
  }
  else if (((DAT_005b87c8 & 1) != 0) && ((S_VSGDVHUB != 0 || (S_GDVHUB != '\0')))) {
    DAT_003fabf6 = '\x01';
  }
  if (DAT_003fabf6 == '\0') {
    DAT_005b87c8 = DAT_005b87c8 & 0xf7;
  }
  else {
    DAT_005b87c8 = DAT_005b87c8 | 8;
  }
  if (((DAT_005b87c8 & 8) == 0) || (DAT_003fabf8 != '\0')) {
    DAT_003fabf7 = '\0';
  }
  else {
    DAT_003fabf7 = '\x01';
  }
  DAT_003fabf8 = '\x01' - ((DAT_005b87c8 & 8) == 0);
  if (DAT_003fabf7 != '\0') {
    _DAT_003fabfa = 0;
  }
  if ((DAT_005b87c8 & 8) != 0) {
    FUN_000b1d28();
  }
  bVar9 = B_gdvhub;
  DAT_005b98b8 = _DAT_003fabfa;
  if ((DAT_005b87c8 & 8) == 0) {
    if ((DAT_005b87c8 & 0x40) != 0) {
      uVar12 = 0;
      do {
        (&DAT_005b9888)[uVar12 & 0xff] = 0;
        uVar12 = (uVar12 & 0xff) + 1;
        if (0xff < uVar12) {
          uVar12 = 0xff;
        }
      } while ((uVar12 & 0xff) < 0xc);
      DAT_005b8e03 = (undefined)uVar12;
      if ((DAT_005b87c8 & 8) != 0) goto LAB_000bf2d8;
    }
LAB_000bf2e4:
    if ((bVar9 != 0) && ((DAT_005b87c8 & 0x80) == 0)) goto LAB_000bf2f8;
    DAT_005b87c8 = DAT_005b87c8 & 0xfb;
  }
  else {
LAB_000bf2d8:
    if ((DAT_005b87c8 & 0x40) != 0) goto LAB_000bf2e4;
LAB_000bf2f8:
    DAT_005b87c8 = DAT_005b87c8 | 4;
  }
  iVar10 = (int)(char)DAT_005b8e04;
  fVar1 = *(float *)(&UNK_003fa6e8 + iVar10 * 4);
  if ((fVar1 <= _DAT_001cf9f0) || ((DAT_005b87c8 & 8) == 0)) {
    DAT_005b87c8 = DAT_005b87c8 & 0xfd;
  }
  else {
    DAT_005b87c8 = DAT_005b87c8 | 2;
  }
  bVar8 = DAT_005b87c8;
  bVar2 = DAT_005b87c8 & 8;
  bVar3 = DAT_005b87c8 & 8;
  bVar4 = DAT_005b87c8 & 8;
  bVar5 = DAT_005b87c8 & 8;
  bVar6 = DAT_005b87c8 & 8;
  bVar7 = DAT_005b87c8 & 8;
  if ((((DAT_005b87c8 & 8) != 0) && ((DAT_005b87c8 & 0x40) == 0)) ||
     ((bVar9 != 0 && ((DAT_005b87c8 & 0x80) == 0)))) {
    if ((bVar9 != 0) && ((DAT_005b87c8 & 0x80) == 0)) {
      uVar12 = 0;
      do {
        (&DAT_005b9888)[uVar12 & 0xff] = (&DAT_005b98a0)[uVar12 & 0xff];
        uVar12 = (uVar12 & 0xff) + 1;
        if (0xff < uVar12) {
          uVar12 = 0xff;
        }
      } while ((uVar12 & 0xff) < 0xc);
    }
    uVar12 = 0;
    do {
      (&DAT_005b98a0)[uVar12 & 0xff] = 0;
      uVar12 = (uVar12 & 0xff) + 1;
      if (0xff < uVar12) {
        uVar12 = 0xff;
      }
    } while ((uVar12 & 0xff) < 0xc);
    DAT_005b8e03 = (undefined)uVar12;
  }
  if ((((bVar2 != 0) && ((bVar8 & 0x40) == 0)) || ((bVar9 != 0 && ((bVar8 & 0x80) == 0)))) ||
     (fVar1 <= _DAT_001cf9f0)) {
LAB_000bf4b8:
    if ((bVar4 == 0) || ((bVar8 & 0x40) != 0)) goto LAB_000bf4cc;
  }
  else {
    if (bVar3 != 0) {
      uVar12 = (ushort)(&DAT_005b98a0)[iVar10] + 1;
      if (0xffff < uVar12) {
        uVar12 = 0xffff;
      }
      DAT_005b87c6 = (ushort)uVar12;
      goto LAB_000bf4b8;
    }
LAB_000bf4cc:
    if (((bVar9 == 0) || ((bVar8 & 0x80) != 0)) && ((_DAT_001cf9f0 < fVar1 && (bVar5 != 0)))) {
      uVar11 = DAT_005b87c6;
      if (0xfffd < DAT_005b87c6) {
        uVar11 = 0xfffe;
      }
      goto LAB_000bf528;
    }
  }
  uVar11 = (&DAT_005b98a0)[iVar10];
LAB_000bf528:
  (&DAT_005b98a0)[iVar10] = uVar11;
  if (((_DAT_001cf9e6 < (ushort)(&DAT_005b9888)[iVar10]) && (bVar6 != 0)) && (DAT_003fabf5 == '\0'))
  {
    DAT_003fabf4 = true;
  }
  else {
    DAT_003fabf4 = false;
  }
  if ((_DAT_001cf9e6 < (ushort)(&DAT_005b9888)[iVar10]) && (bVar7 != 0)) {
    DAT_003fabf5 = 1;
  }
  else {
    DAT_003fabf5 = 0;
  }
  if ((bool)DAT_003fabf4) {
    DAT_005b87c8 = bVar8 | 0x10;
  }
  *(ushort *)(&DAT_005b9870 + iVar10 * 2) = uVar11;
  if ((DAT_005b87c8 & 8) == 0) {
    DAT_005b87c8 = DAT_005b87c8 & 0xbf;
  }
  else {
    DAT_005b87c8 = DAT_005b87c8 | 0x40;
  }
  if (bVar9 == 0) {
    DAT_005b87c8 = DAT_005b87c8 & 0x7f;
  }
  else {
    DAT_005b87c8 = DAT_005b87c8 | 0x80;
  }
  if ((DAT_005b8e02 == 1) && ((DAT_005b87c8 & 1) != 0)) {
    DAT_005b8e02 = 0;
  }
  if (DAT_005b8e02 == 0) {
    if ((DAT_005b87c8 & 1) == 0) {
      DAT_005b8e02 = 1;
    }
    if ((DAT_005b8e02 == 0) && ((DAT_005b87c8 & 8) != 0)) {
      DAT_005b8e02 = 2;
    }
  }
  if (DAT_005b8e02 == 2) {
    if ((DAT_005b87c8 & 0x10) == 0) {
      if ((DAT_005b87c8 & 1) == 0) {
        DAT_005b8e02 = 5;
      }
      else if ((DAT_005b87c8 & 8) == 0) {
        DAT_005b8e02 = 3;
      }
    }
    else {
      DAT_005b8e02 = 4;
    }
  }
  DAT_005b8e01 = DAT_005b8e02;
  return;
}

