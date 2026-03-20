/*
 * Program: n42.bin
 * Function: FUN_00115180
 * Entry: 00115180
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00115180(void)

{
  int iVar1;
  
  if ((raster_um & 3) != 2) {
    return;
  }
  func_0xff221184(0x10000);
  if (e_mem_um == '\0') {
    if (mem_ur != -0x67) goto LAB_001151e4;
  }
  else if (mem_ur != 'f') {
LAB_001151e4:
    srst_c_um = srst_c_um + '\x01';
    ram_c_um = ram_c_um + '\x01';
    e_mem_um = '\x01';
    mem_ur = 'f';
    FUN_00110cc4(0x135);
    FUN_00110efc(0x135);
  }
  if ((((ausg_c_ur != (byte)~ausg_c_um) || (ausgh_c_ur != (byte)~ausgh_c_um)) ||
      (ausz_c_ur != (byte)~ausz_c_um)) || (auszh_c_ur != (byte)~auszh_c_um)) {
    srst_c_um = srst_c_um + '\x01';
    ram_c_um = ram_c_um + '\x01';
    e_mem_um = '\x01';
    mem_ur = 'f';
    FUN_00110cc4(0x135);
    FUN_00110efc(0x135);
  }
  if ((B_reaci_um & 0x40) == 0) {
    if (DAT_003fa02e != -0x67) {
LAB_00115350:
      srst_c_um = srst_c_um + '\x01';
      ram_c_um = ram_c_um + '\x01';
      e_mem_um = '\x01';
      mem_ur = 'f';
      FUN_00110cc4(0x135);
      FUN_00110efc(0x135);
    }
  }
  else if (((B_reaci_um & 0x40) != 0x40) || (DAT_003fa02e != 'f')) goto LAB_00115350;
  if ((B_reaci_um & 0x80) == 0) {
    if (DAT_003fa02f == -0x67) goto LAB_00115424;
  }
  else if (((B_reaci_um & 0x80) == 0x80) && (DAT_003fa02f == 'f')) goto LAB_00115424;
  srst_c_um = srst_c_um + '\x01';
  ram_c_um = ram_c_um + '\x01';
  e_mem_um = '\x01';
  mem_ur = 'f';
  FUN_00110cc4(0x135);
  FUN_00110efc(0x135);
LAB_00115424:
  if ((B_reaci_um & 0x40) == 0x40) {
    if (ausg_c_um < DAT_001ce721) {
      ausg_c_um = ausg_c_um + 1;
      ausg_c_ur = ~ausg_c_um;
    }
    else {
      srst_c_um = srst_c_um + '\x01';
      e_mem_um = '\x01';
      mem_ur = 'f';
      FUN_00110cc4(0x135);
      FUN_00110efc(0x135);
    }
    B_reaci_um = B_reaci_um & 0xbf;
    DAT_003fa02e = 0x99;
  }
  else {
    DAT_003fa02e = 0x66;
    iVar1 = FUN_0011581c(&DAT_003fa02e);
    if (iVar1 == 0) {
      DAT_003fa02e = 0x99;
    }
    else {
      wri_c_um = wri_c_um + '\x01';
      srst_c_um = srst_c_um + '\x01';
      e_mem_um = '\x01';
      mem_ur = 'f';
      FUN_00110cc4(0x135);
      FUN_00110efc(0x135);
    }
  }
  if ((B_reaci_um & 0x80) == 0x80) {
    if (ausz_c_um < DAT_001ce723) {
      ausz_c_um = ausz_c_um + 1;
      ausz_c_ur = ~ausz_c_um;
    }
    else {
      srst_c_um = srst_c_um + '\x01';
      e_mem_um = '\x01';
      mem_ur = 'f';
      FUN_00110cc4(0x136);
      FUN_00110efc(0x136);
    }
    B_reaci_um = B_reaci_um & 0x7f;
    DAT_003fa02f = 0x99;
  }
  else {
    DAT_003fa02f = 0x66;
    iVar1 = FUN_0011581c(&DAT_003fa02f);
    if (iVar1 == 0) {
      DAT_003fa02f = 0x99;
    }
    else {
      wri_c_um = wri_c_um + '\x01';
      srst_c_um = srst_c_um + '\x01';
      e_mem_um = '\x01';
      mem_ur = 'f';
      FUN_00110cc4(0x135);
      FUN_00110efc(0x135);
    }
  }
  if (ausg_c_um != 0) {
    if (ausgh_c_um < DAT_001ce720) {
      ausgh_c_um = ausgh_c_um + 1;
      ausgh_c_ur = ~ausgh_c_um;
    }
    else {
      ausgh_c_um = 0;
      ausgh_c_ur = 0xff;
      ausg_c_um = ausg_c_um - 1;
      ausg_c_ur = ~ausg_c_um;
    }
  }
  if (ausz_c_um != 0) {
    if (auszh_c_um < DAT_001ce722) {
      auszh_c_um = auszh_c_um + 1;
      auszh_c_ur = ~auszh_c_um;
    }
    else {
      auszh_c_um = 0;
      auszh_c_ur = 0xff;
      ausz_c_um = ausz_c_um - 1;
      ausz_c_ur = ~ausz_c_um;
    }
  }
  func_0xff2211ac(_DAT_003fa0d8);
  return;
}

