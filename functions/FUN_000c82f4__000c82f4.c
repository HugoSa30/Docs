/*
 * Program: n42.bin
 * Function: FUN_000c82f4
 * Entry: 000c82f4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c82f4(void)

{
  undefined uStack_18;
  char local_17;
  undefined uStack_14;
  char local_13;
  
  if (wdastate_l == 0x9a9a9a9a) {
    FUN_0009b900(9,1,&uStack_18);
    if (local_17 == '\0') {
      wdaoffdeb_u16 = 0x14;
      FUN_000c3ccc(6,0xff);
    }
    else if (wdaoffdeb_u16 == 0) {
      wdastate_l = 0;
      (*(code *)&SUB_00faca3c)(0x73);
    }
    else {
      wdaoffdeb_u16 = wdaoffdeb_u16 - 1;
    }
  }
  else {
    FUN_0009b900(9,1,&uStack_14);
    if (((local_13 == '\0') && ((_DAT_002fc010 >> 0x1d & 1) == 0)) && (B_ausc_act == '\0')) {
      if (wdaondeb_u16 == 0) {
        _wdaacpat_l = 0x9a9a9a9a;
        wdastate_l = 0x9a9a9a9a;
        FUN_000c3ccc(6,0xff);
        if (umerr_c_um < 5) {
          _wdaovpat_l = 0xb5b5b5b5;
        }
        else {
          _wdaovpat_l = 0;
        }
      }
      else {
        wdaondeb_u16 = wdaondeb_u16 - 1;
      }
    }
    else {
      wdaondeb_u16 = 1;
    }
  }
  return;
}

