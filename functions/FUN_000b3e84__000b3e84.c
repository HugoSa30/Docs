/*
 * Program: n42.bin
 * Function: FUN_000b3e84
 * Entry: 000b3e84
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b3e84(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  DAT_005b8e57 = 0;
  if (0x13 < inisynmon) goto LAB_000b4264;
  if ((((B_ale & 1) != 0) && ((DAT_001cb33d & 2) != 0)) || (DAT_001cb33d == 0xfe)) {
    uVar1 = _DAT_001c7b04;
    if (((B_ale & 1) != 0) && ((DAT_001cb33d & 2) != 0)) {
      uVar1 = _wkwstop_w;
    }
    uVar3 = (uint)uVar1 + (uint)DAT_001c7b0b * 0x3c & 0xffff;
    uVar2 = uVar3 + (uint)DAT_001c7b06 * 0x3c & 0xffff;
    if (uVar2 < 0x1b31) {
      if (0xd20 < uVar2) goto LAB_000b3f54;
    }
    else {
      if (0x1b30 < uVar3) {
LAB_000b3f54:
        if (0xd20 < uVar3) goto joined_r0x000b3f68;
      }
      uVar2 = uVar2 + 0x78 & 0xffff;
    }
joined_r0x000b3f68:
    for (; 0x1c1f < uVar2; uVar2 = uVar2 + 0xe3e0 & 0xffff) {
    }
    DAT_005b9a56 = (undefined2)uVar2;
    uVar3 = uVar2;
    if (0xe0f < uVar2) {
      uVar3 = uVar2 + 0xf1f0;
    }
    if ((0xe10 - ((0x100 - (uint)FSYNDEL) * 0x708 >> 8) & 0xffff) < (uVar3 & 0xffff)) {
      (*(code *)&SUB_00fb3728)(1,0,0,0);
    }
    else {
      (*(code *)&SUB_00fb3728)(1,1,uVar2,0);
    }
    (*(code *)&SUB_00fb2fa4)(1,1);
  }
  DAT_003fb05e = DAT_003fb05e & 0xf3;
  if (((DAT_003fdf93 & 1) == 0) && (((_CWPG1 & 0x20) != 0 || ((_CWPG1 & 0x40) != 0)))) {
    DAT_005b8e57 = DAT_005b8e57 | 1;
  }
  if ((_CWPG1 & 0x20) != 0) {
    DAT_003fb05e = DAT_003fb05e | 4;
  }
  if ((_CWPG1 & 0x40) != 0) {
    DAT_003fb05e = DAT_003fb05e | 8;
  }
  if (((DAT_003fdf95 & 1) == 0) && (((_CWPG4 & 0x20) != 0 || ((_CWPG4 & 0x40) != 0)))) {
    DAT_005b8e57 = DAT_005b8e57 | 2;
  }
  if ((_CWPG4 & 0x20) != 0) {
    DAT_003fb05e = DAT_003fb05e | 4;
  }
  if ((_CWPG4 & 0x40) != 0) {
    DAT_003fb05e = DAT_003fb05e | 8;
  }
  _DAT_003f9b18 = _DAT_001c7b02;
  DAT_003f9b1e = DAT_005b8e57;
  if ((DAT_003fb05e & 4) == 0) {
    DAT_003f9b1d = 0;
  }
  else {
    DAT_003f9b1d = 3;
  }
  if ((DAT_003fb05e & 8) == 0) {
    DAT_003f9b1c = 0;
  }
  else {
    DAT_003f9b1c = 2;
    DAT_003f9b1d = 3;
  }
  (*(code *)&SUB_00fb3728)(4,2,0);
  (*(code *)&SUB_00fb2bc8)(4,(int)DAT_001c7b09,0);
  (*(code *)&SUB_00fb2bc8)(4,(int)DAT_001c7b09,1);
  FUN_000afe80(0,0x3c,0);
  FUN_000afe80(0,0x3c,1);
  (*(code *)&SUB_00fb2fa4)(4,1);
  if ((DAT_003fb05e & 4) != 0) {
    DAT_005b8e57 = DAT_005b8e57 | 0x20;
  }
  if ((DAT_003fb05e & 8) != 0) {
    DAT_005b8e57 = DAT_005b8e57 | 0x40;
  }
LAB_000b4264:
  if (pgmaster == '\0') {
    if (((_CWPG1 & 1) == 0) && ((0x13 < inisynmon || ((_CWPG1 & 2) == 0)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
    }
    (*(code *)&SUB_00fb3728)(2,uVar4,0,(_CWPG1 & 4) != 0);
    (*(code *)&SUB_00fb2fa4)(2,1);
  }
  else if (pgmaster == '\x01') {
    if (((_CWPG4 & 1) == 0) && ((0x13 < inisynmon || ((_CWPG4 & 2) == 0)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
    }
    (*(code *)&SUB_00fb3728)(2,uVar4,1,(_CWPG4 & 4) != 0);
    (*(code *)&SUB_00fb2fa4)(2,1);
  }
  (*(code *)&SUB_00fb3728)(3,5,4,0xf);
  (*(code *)&SUB_00fb2fa4)(3,1);
  return;
}

