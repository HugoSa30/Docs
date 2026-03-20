/*
 * Program: n42.bin
 * Function: FUN_00193328
 * Entry: 00193328
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00193328(void)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_r31;
  
  uVar8 = (uint)DAT_005b930a;
  uVar9 = (uint)DAT_005b9304;
  if (uVar8 < uVar9) {
    if ((DAT_003fbf6e == '\0') || ((int)(uVar9 - uVar8) <= (int)(uint)_DAT_001c1db4)) {
      DAT_005bb7e6 = 0;
    }
    else if (DAT_005bb7e6 < _DAT_001c1db8) {
      DAT_005bb7e6 = DAT_005bb7e6 + 1;
    }
    DAT_005bb7e8 = 0;
  }
  else {
    if ((DAT_003fbf6e == '\0') || ((int)(uVar8 - uVar9) <= (int)(uint)_DAT_001c1db2)) {
      DAT_005bb7e8 = 0;
    }
    else if (DAT_005bb7e8 < _DAT_001c1db6) {
      DAT_005bb7e8 = DAT_005bb7e8 + 1;
    }
    DAT_005bb7e6 = 0;
  }
  if ((((DAT_005b8d0d == '\0') && (DAT_005b8d0b == '\0')) && ((unaff_r31 & 1) == 0)) &&
     ((unaff_r31 & 2) == 0)) {
    DAT_003fbf64 = 0;
    bVar7 = false;
  }
  else {
    DAT_003fbf64 = 1;
    bVar7 = true;
  }
  uVar9 = (uint)DAT_005b9308;
  if (uVar9 < uVar8) {
    uVar9 = uVar8 - uVar9;
  }
  else {
    uVar9 = uVar9 - uVar8;
  }
  uVar1 = _DAT_001c1daa;
  if (uVar8 <= _DAT_001c1dc0) {
    uVar1 = _DAT_001c1dac;
  }
  if ((uint)uVar1 < (uVar9 & 0xffff)) {
    if (DAT_005bb78e < DAT_001c1da5) {
      DAT_005bb78e = DAT_005bb78e + 1;
      goto LAB_001934e0;
    }
    bVar2 = true;
  }
  else {
    DAT_005bb78e = 0;
LAB_001934e0:
    bVar2 = false;
  }
  if ((DAT_003fbf6d == '\0') || (B_fgr_um != '\0')) {
    DAT_005bb790._2_1_ = 0;
LAB_0019353c:
    bVar6 = false;
  }
  else {
    if (DAT_005bb790._2_1_ < DAT_001c1da7) {
      DAT_005bb790._2_1_ = DAT_005bb790._2_1_ + 1;
      goto LAB_0019353c;
    }
    bVar6 = true;
  }
  if (((B_asc_reg == '\0') || (DAT_003fbead == '\0')) ||
     ((DAT_003fbeab == '\0' || ((DAT_003fbeaf != '\0' || ((DAT_001c1da1 & 2) != 0)))))) {
    DAT_005bb7ea = 0;
LAB_001935c8:
    bVar3 = false;
  }
  else {
    if (DAT_005bb7ea < _DAT_001c1dbe) {
      DAT_005bb7ea = DAT_005bb7ea + 1;
      goto LAB_001935c8;
    }
    bVar3 = true;
  }
  if ((((B_asc_reg == '\0') || (DAT_003fbead == '\0')) || (DAT_003fbeab != '\0')) ||
     ((DAT_003fbeaf != '\0' || ((DAT_001c1da1 & 1) != 0)))) {
    DAT_005bb7ec = 0;
LAB_0019364c:
    bVar4 = false;
  }
  else {
    if (DAT_005bb7ec < _DAT_001c1dbc) {
      DAT_005bb7ec = DAT_005bb7ec + 1;
      goto LAB_0019364c;
    }
    bVar4 = true;
  }
  if (((B_asc_reg == '\0') || (DAT_003fbead != '\0')) ||
     ((DAT_003fbeab == '\0' || ((DAT_003fbeaf != '\0' || ((DAT_001c1da1 & 4) != 0)))))) {
    DAT_005bb7ee = 0;
LAB_001936d0:
    bVar5 = false;
  }
  else {
    if (DAT_005bb7ee < _DAT_001c1dba) {
      DAT_005bb7ee = DAT_005bb7ee + 1;
      goto LAB_001936d0;
    }
    bVar5 = true;
  }
  if ((((((DAT_003fc120 != '\0') && ((DAT_001c1da0 & 1) == 0)) || (B_lowra != '\0')) ||
       ((DAT_003fc1ab != '\0' || (bVar3)))) || (bVar4)) || (bVar5)) {
    DAT_005b90a2 = DAT_005b90a2 | 8;
  }
  else {
    DAT_005b90a2 = DAT_005b90a2 & 0xf7;
  }
  if (DAT_003fbf6d == '\0') {
    DAT_005bb78f = 0;
    bVar3 = false;
    DAT_005bb790._0_1_ = 0;
LAB_00193838:
    bVar4 = false;
  }
  else {
    if (DAT_005b90a5 < DAT_001c1d9f) {
      if (DAT_005bb78f < DAT_001c1da8) {
        DAT_005bb78f = DAT_005bb78f + 1;
        goto LAB_001937bc;
      }
      bVar3 = true;
    }
    else {
      DAT_005bb78f = 0;
LAB_001937bc:
      bVar3 = false;
    }
    if ((DAT_001c1d9e < DAT_005b90a5) && (B_fgr != '\0')) {
      if (DAT_005bb790._0_1_ < DAT_001c1da6) {
        DAT_005bb790._0_1_ = DAT_005bb790._0_1_ + 1;
        goto LAB_00193838;
      }
      bVar4 = true;
    }
    else {
      DAT_005bb790._0_1_ = 0;
      bVar4 = false;
    }
  }
  if ((((B_brems != '\0') || (B_kuppl != '\0')) || (DAT_001c1da4 < nmot)) ||
     ((((((gangi < DAT_001c1da3 || (DAT_001c1da2 < gangi)) ||
         ((B_acc == '\0' && ((bVar3 || (bVar4)))))) || (bVar6)) ||
       ((B_gwhs != '\0' || (DAT_003fbf71 != '\0')))) ||
      ((B_acc == '\0' &&
       ((((bVar2 && ((DAT_001c1da0 & 2) != 0)) || (uVar8 < _DAT_001c1dc4)) ||
        ((_DAT_001c1dc2 < uVar8 || ((DAT_005b90a2 & 8) != 0)))))))))) {
    DAT_005b90a2 = DAT_005b90a2 | 2;
  }
  else {
    DAT_005b90a2 = DAT_005b90a2 & 0xfd;
  }
  if (((((B_dknolu != '\0') && ((DAT_001c1da0 & 8) == 0)) ||
       ((B_dkpiu != '\0' && ((DAT_001c1da0 & 0x10) == 0)))) ||
      ((DAT_005b8d0c != '\0' ||
       (((B_pwgnotfr != '\0' && ((DAT_001c1da0 & 4) != 0)) || ((DAT_003fde71 & 1) != 0)))))) ||
     ((((DAT_003fdfdf & 1) != 0 && (((DAT_003fde79 & 1) != 0 || (DAT_003fbeae != '\0')))) ||
      ((DAT_003fbf07 != '\0' && ((DAT_001c1da0 & 0x20) != 0)))))) {
    DAT_003fbf63 = '\x01';
  }
  if (((DAT_005b90a2 & 2) == 0) && (DAT_003fbf63 == '\0')) {
    DAT_003fbf65 = 0;
    bVar2 = false;
  }
  else {
    DAT_003fbf65 = 1;
    bVar2 = true;
  }
  if ((bVar2) || (bVar7)) {
    DAT_003fbf66 = '\0';
  }
  else {
    if ((uVar8 < DAT_005bb7f2) || (DAT_005bb7f0 < uVar8)) {
      DAT_003fbf67 = '\0';
    }
    else {
      DAT_003fbf67 = '\x01';
    }
    if (((B_acc == '\0') && (DAT_003fbf67 == '\0')) ||
       ((((DAT_005b8d0f == '\0' || ((DAT_005bb795 & 1) != 0)) &&
         (((DAT_005b8d11 == '\0' || ((DAT_005bb795 & 2) != 0)) &&
          ((DAT_005b8d0e == '\0' || ((DAT_005bb795 & 4) != 0)))))) &&
        ((DAT_005b8d10 == '\0' || ((DAT_005bb795 & 8) != 0)))))) {
      DAT_005b90a2 = DAT_005b90a2 & 0xfb;
    }
    else {
      DAT_005b90a2 = DAT_005b90a2 | 4;
      DAT_003fbf66 = '\x01';
    }
  }
  if (DAT_005b8d0f == '\0') {
    DAT_005bb795 = DAT_005bb795 & 0xfe;
  }
  else {
    DAT_005bb795 = DAT_005bb795 | 1;
  }
  if (DAT_005b8d0e == '\0') {
    DAT_005bb795 = DAT_005bb795 & 0xfb;
  }
  else {
    DAT_005bb795 = DAT_005bb795 | 4;
  }
  if (DAT_005b8d11 == '\0') {
    DAT_005bb795 = DAT_005bb795 & 0xfd;
  }
  else {
    DAT_005bb795 = DAT_005bb795 | 2;
  }
  if (DAT_005b8d10 == '\0') {
    DAT_005bb795 = DAT_005bb795 & 0xf7;
  }
  else {
    DAT_005bb795 = DAT_005bb795 | 8;
  }
  if (DAT_003fbf66 != '\0') {
    DAT_003fbf62 = 0;
    DAT_005bb790._1_1_ = 0;
    DAT_005bb795 = DAT_005bb795 & 0xef;
    return;
  }
  if (bVar7) {
    DAT_005bb795 = DAT_005bb795 | 0x10;
LAB_00193cf0:
    if ((DAT_005bb795 & 0x10) != 0) {
      if (DAT_005bb790._1_1_ < DAT_005bb794) {
        DAT_005bb790._1_1_ = DAT_005bb790._1_1_ + 1;
      }
      goto LAB_00193d34;
    }
  }
  else if ((DAT_005bb795 & 0x10) != 0) {
    if (DAT_005bb790._1_1_ == DAT_005bb794) {
      DAT_005bb795 = DAT_005bb795 & 0xef;
    }
    goto LAB_00193cf0;
  }
  DAT_005bb790._1_1_ = 0;
LAB_00193d34:
  if ((((DAT_005bb795 & 0x10) != 0) && (DAT_005bb790._1_1_ == DAT_005bb794)) || (bVar2)) {
    DAT_003fbf62 = 1;
    DAT_005bb790._3_1_ = 0;
  }
  else if ((byte)DAT_005bb790 < 2) {
    DAT_005bb790._3_1_ = (byte)DAT_005bb790 + 1;
  }
  else {
    DAT_003fbf62 = 0;
  }
  return;
}

