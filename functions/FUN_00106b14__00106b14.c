/*
 * Program: n42.bin
 * Function: FUN_00106b14
 * Entry: 00106b14
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00106b14(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  
  uVar1 = _DAT_003fb96c;
  uVar4 = (uint)DAT_003fb960;
  uVar3 = 0;
  do {
    if (uVar4 < 2) {
      uVar5 = (uint)DAT_005b8058;
      uVar6 = (uint)((DAT_005b8058 & 0x10) != 0);
      if ((DAT_005b8058 & 0x20) == 0) goto LAB_00106b9c;
      iVar7 = 1;
    }
    else {
      uVar5 = (uint)DAT_005b8060;
      uVar6 = (uint)((DAT_005b8060 & 0x10) != 0);
      if ((DAT_005b8060 & 0x20) == 0) {
LAB_00106b9c:
        iVar7 = 0;
      }
      else {
        iVar7 = 1;
      }
    }
    puVar8 = (uint *)(&DAT_005b800c)[uVar3];
    puVar8[1] = (uVar5 & 0xf) << 8 | uVar6 << 0xb | iVar7 << 5;
    if ((uVar1 & (&DAT_005b8000)[uVar3]) != 0) {
      *puVar8 = *puVar8 & 0xf7ffffff;
      if (uVar4 == 1) {
        uVar5 = 0x8000000;
      }
      else {
        uVar5 = 0;
      }
      *puVar8 = uVar5 | *puVar8;
      if (uVar3 < 3) {
        uVar5 = _DAT_003fb968 >> (uVar3 * -8 + 0x10 & 0x3f) & 0xff00;
      }
      else {
        uVar5 = _DAT_003fb968 << 8;
      }
      if ((uVar4 == 2) || (uVar4 == 3)) {
        uVar6 = 4;
      }
      else {
        uVar6 = 0;
      }
      if (uVar4 < 3) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x40;
      }
      puVar8[2] = uVar5 | puVar8[2] | uVar6 | uVar2 | 2;
      if (3 < uVar4) {
        *puVar8 = *puVar8 | uVar4 * 0x1000000 + 0xfd000000;
      }
    }
    uVar3 = uVar3 + 1 & 0xffff;
    if (1 < uVar3) {
      return;
    }
  } while( true );
}

