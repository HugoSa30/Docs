/*
 * Program: n42.bin
 * Function: FUN_00168060
 * Entry: 00168060
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00168060(void)

{
  undefined4 uVar1;
  ushort local_48;
  ushort local_44 [2];
  ushort local_40;
  ushort local_3c;
  ushort local_38 [2];
  undefined4 local_34;
  ushort *local_30;
  ushort local_2c [2];
  undefined4 local_28;
  ushort *local_24;
  ushort local_20 [2];
  ushort *local_1c;
  
  local_48 = _B_mxkpe;
  if (DAT_001c1d7d == '\0') {
    local_48 = _B_mxkpe & 0xd0fc | 0x2002;
  }
  else if (B_desee != '\0') {
    if (DAT_003fab44 == '\0') {
      DAT_003fab43 = DAT_003fab43 + 1;
      if (DAT_003fab43 < DAT_001c1d7f) {
        FUN_001aa884(0xd);
        DAT_003fab44 = '\x01';
      }
      else {
        DAT_003fab44 = '\x02';
      }
    }
    else if (DAT_003fab44 == '\x01') {
      DAT_003fab44 = '\0';
      if (kpe_error == 0) {
        kpe_error = FUN_001259b0(0xd);
      }
      else {
        DAT_003fab42 = DAT_003fab42 + 1;
        if (DAT_003fab42 < DAT_001c1d7e) {
          kpe_error = FUN_001259b0(0xd);
        }
        else {
          local_44[0] = _B_mxkpe;
          local_24 = local_44;
          local_2c[0] = _B_mxkpe;
          uVar1 = FUN_001259e4(local_2c,kpe_error,0xd);
          local_28._0_2_ = (ushort)((uint)uVar1 >> 0x10);
          local_3c = local_28._0_2_;
          local_48 = local_28._0_2_;
          DAT_003fab44 = '\x02';
          local_28 = uVar1;
        }
      }
    }
    else if (DAT_003fab44 == '\x02') {
      local_44[0] = _B_mxkpe;
      local_30 = local_44;
      local_38[0] = _B_mxkpe;
      uVar1 = FUN_00125cc0(&DAT_003fab3f,local_38,0xd,2,10);
      local_34._0_2_ = (ushort)((uint)uVar1 >> 0x10);
      local_40 = local_34._0_2_;
      local_48 = local_34._0_2_;
      local_34 = uVar1;
    }
    else {
      DAT_003fab44 = '\x02';
    }
  }
  local_44[0] = local_48;
  local_1c = local_44;
  local_20[0] = local_48;
  func_0xff222958(0x6a,local_20);
  return;
}

