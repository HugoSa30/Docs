/*
 * Program: n42.bin
 * Function: FUN_001378b8
 * Entry: 001378b8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001378b8(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_28 [5];
  
  if ((DAT_003f99ce == (byte)~DAT_003f99cf) && (plstate_um == (byte)~plstate_ur)) {
    if (DAT_003fbe8b == '\0') {
      if (DAT_003f99d3 == -0x67) goto LAB_00137948;
      goto LAB_001379b0;
    }
    if (DAT_003f99d3 != 'f') goto LAB_001379b0;
LAB_00137948:
    if (B_newqr_um == '\0') {
      if (newqr_ur == -0x67) goto LAB_0013797c;
      goto LAB_001379b0;
    }
    if (newqr_ur != 'f') goto LAB_001379b0;
LAB_0013797c:
    if (B_nxtrp_um == '\0') {
      if (nxtrp_ur != -0x67) goto LAB_001379b0;
    }
    else if (nxtrp_ur != 'f') goto LAB_001379b0;
  }
  else {
LAB_001379b0:
    ram_c_um = ram_c_um + '\x01';
    srst_c_um = srst_c_um + '\x01';
    e_mem_um = 1;
    mem_ur = 0x66;
    FUN_00110cc4(0x135);
    FUN_00110efc(0x135);
  }
  iVar1 = FUN_0011581c(&DAT_003f99ce);
  if (iVar1 != 0) {
    wri_c_um = wri_c_um + '\x01';
    srst_c_um = srst_c_um + '\x01';
    e_mem_um = 1;
    mem_ur = 0x66;
    FUN_00110cc4(0x135);
    FUN_00110efc(0x135);
  }
  if (DAT_003fbe8b == '\0') {
    DAT_003fa05c = DAT_003fa05c + 1;
    if ((uint)DAT_003fa05c <= DAT_001ce6d2 + 3) {
      return;
    }
    FUN_00110cc4(300);
    FUN_00110efc(300);
    return;
  }
  if (DAT_003fa05d != '\0') {
    DAT_003fa05d = 0;
    _DAT_003fa058 = 8000;
    if (B_nxtrp_um == '\0') {
      apakres_um = 0;
      FUN_0013739c();
    }
    else {
      FUN_0013739c();
    }
    local_28[0] = _DAT_003fa060;
    func_0xff213480(local_28);
    _DAT_003fa064 = func_0xff2615ac();
    goto LAB_00137ee8;
  }
  DAT_003fa05d = 1;
  uVar2 = func_0xff2135ac();
  _DAT_003fa068 = (undefined2)uVar2;
  uVar4 = (uVar2 & 0x70) >> 4;
  umerr_c_um = (byte)uVar4;
  newqu_um = (byte)uVar2 & 0xf;
  uVar3 = (uVar2 & 0x3f00) >> 8;
  DAT_003fa05e = (undefined)((uVar2 & 0x3f00) >> 8);
  FUN_00137360();
  B_newqr_um = '\x01';
  newqr_ur = 'f';
  uVar2 = uVar4 & 0xff;
  if (DAT_005b8fe7 == uVar2) {
    if (DAT_003f99ce != 0) {
      DAT_003f99ce = DAT_003f99ce - 1;
      DAT_003f99cf = ~DAT_003f99ce;
    }
  }
  else {
    DAT_005b8fe7 = (byte)uVar4;
    if (DAT_003f99ce < 7) {
      DAT_003f99ce = DAT_003f99ce + 1;
      DAT_003f99cf = ~DAT_003f99ce;
    }
    if (DAT_003fa05f == '\x02') {
      if (uVar2 < 4) {
        plstate_um = 2;
      }
    }
    else if (DAT_003fa05f == '\x03') {
      if (uVar2 < 3) {
        plstate_um = 4;
      }
    }
    else if ((DAT_003fa05f == '\x04') && (uVar2 < 4)) {
      plstate_um = 6;
    }
  }
  if (((uVar3 & 0xff) != 0x30) && (func_0xff2133ac(0x12c00), DAT_003f99ce < 7)) {
    DAT_003f99ce = DAT_003f99ce + 1;
    DAT_003f99cf = ~DAT_003f99ce;
  }
  if (plstate_um < 5) {
    if (plstate_um == 4) {
      _DAT_003fa058 = 92000;
      B_nxtrp_um = '\x01';
      nxtrp_ur = 'f';
      plstate_um = 5;
      plstate_ur = 0xfa;
      DAT_005b8fe7 = DAT_005b8fe7 + 2;
      DAT_003fa05f = '\x03';
    }
    else if (plstate_um == 1) {
      _DAT_003fa058 = 72000;
      B_nxtrp_um = '\x01';
      nxtrp_ur = 'f';
      DAT_003fa05f = '\x01';
      if (DAT_005b8fe7 == 0) {
        plstate_um = 2;
        plstate_ur = 0xfd;
        DAT_005b8fe7 = 0;
      }
      else {
        DAT_005b8fe7 = DAT_005b8fe7 - 1;
      }
    }
    else if (plstate_um == 2) {
      _DAT_003fa058 = 52000;
      B_nxtrp_um = '\x01';
      nxtrp_ur = 'f';
      plstate_um = 3;
      plstate_ur = 0xfc;
      DAT_005b8fe7 = DAT_005b8fe7 + 1;
      DAT_003fa05f = '\x02';
    }
    else {
      if (plstate_um != 3) goto LAB_00137ea4;
      _DAT_003fa058 = 72000;
      B_nxtrp_um = '\x01';
      nxtrp_ur = 'f';
      DAT_003fa05f = '\x01';
      if (DAT_005b8fe7 < 2) {
        plstate_um = 4;
        plstate_ur = 0xfb;
        DAT_005b8fe7 = 0;
      }
      else {
        DAT_005b8fe7 = DAT_005b8fe7 - 1;
      }
    }
  }
  else if (plstate_um == 5) {
    _DAT_003fa058 = 72000;
    B_nxtrp_um = '\x01';
    nxtrp_ur = 'f';
    DAT_003fa05f = '\x01';
    if (DAT_005b8fe7 < 2) {
      plstate_um = 6;
      plstate_ur = 0xf9;
      DAT_005b8fe7 = 0;
    }
    else {
      DAT_005b8fe7 = DAT_005b8fe7 - 1;
    }
  }
  else if (plstate_um == 6) {
    _DAT_003fa058 = 72000;
    B_nxtrp_um = '\0';
    nxtrp_ur = -0x67;
    DAT_005b8fe7 = DAT_005b8fe7 + 1;
    plstate_um = 1;
    plstate_ur = 0xfe;
    DAT_003fa05f = '\x04';
  }
  else {
LAB_00137ea4:
    plstate_um = 7;
    plstate_ur = 0xf8;
  }
  if (DAT_003f99ce < 5) {
    B_ausc_act = 0;
  }
  else {
    B_ausc_act = 1;
    FUN_00110e2c(1);
  }
LAB_00137ee8:
  func_0xff26b1cc(0,(uint)(_DAT_003fa058 * 1000) / 400,0);
  return;
}

