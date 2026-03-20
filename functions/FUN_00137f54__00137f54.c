/*
 * Program: n42.bin
 * Function: FUN_00137f54
 * Entry: 00137f54
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00137f54(void)

{
  uint uVar1;
  undefined4 local_18 [2];
  
  if (DAT_003fbe8b == '\0') {
    if (DAT_003f99d3 == -0x67) goto LAB_00137ff8;
  }
  else if (DAT_003f99d3 == 'f') goto LAB_00137ff8;
  ram_c_um = ram_c_um + '\x01';
  srst_c_um = srst_c_um + '\x01';
  e_mem_um = 1;
  mem_ur = 0x66;
  FUN_00110cc4(0x135);
  FUN_00110efc(0x135);
LAB_00137ff8:
  if (DAT_003fbe8b == '\0') {
    DAT_005b8feb = DAT_005b8feb + 1;
    if (DAT_001ce6d2 < DAT_005b8feb) {
      DAT_003fa070 = 0;
    }
    else {
      uVar1 = func_0xff2135ac();
      _DAT_003fa068 = (undefined2)uVar1;
      umerr_c_um = (byte)((uVar1 & 0x70) >> 4);
      newqu_um = (byte)uVar1 & 0xf;
      if (DAT_003fa070 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00138088 */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((uint)DAT_003fa070 * 4 + 0xf38094))();
        return;
      }
      DAT_003fa070 = 0;
      FUN_00110e2c(1);
      if (DAT_003fa070 == 0x45) {
        func_0xff2133ac(0x12c00);
        DAT_003fd7cd = 0;
        DAT_003fbe8b = '\x01';
        DAT_003f99d3 = 'f';
        uVar1 = 0;
        do {
          *(undefined2 *)(&UNK_003fa072 + uVar1 * 4) = 0;
          *(undefined2 *)(&UNK_003fa074 + uVar1 * 4) = 0;
          uVar1 = uVar1 + 1 & 0xff;
        } while (uVar1 < 0x10);
        func_0xff26b3a0(0);
        func_0xff26b1cc(0,200000,0);
      }
      else {
        if (DAT_003fbe8c == '\0') {
          _DAT_003fa06c = 0;
        }
        else {
          func_0xff261ad8(newqu_um);
        }
        local_18[0] = _DAT_003fa06c;
        func_0xff213480(local_18);
      }
    }
  }
  return;
}

