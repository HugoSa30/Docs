/*
 * Program: n42.bin
 * Function: FUN_00153a64
 * Entry: 00153a64
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00153a64(void)

{
  ushort local_68;
  ushort local_64;
  ushort local_60;
  ushort local_5c;
  ushort local_58;
  ushort local_54;
  ushort local_50;
  ushort local_4c [2];
  ushort local_48 [2];
  ushort *local_44;
  ushort local_40 [2];
  ushort *local_3c;
  ushort local_38 [2];
  ushort *local_34;
  ushort local_30 [2];
  ushort *local_2c;
  ushort local_28 [2];
  ushort *local_24;
  ushort local_20 [2];
  ushort *local_1c;
  ushort local_18 [2];
  ushort *local_14;
  
  local_68 = _B_npufsga;
  local_64 = _B_npufsgb;
  local_50 = _B_npufsgc;
  local_60 = _TYP_ufspsc;
  local_5c = _TYP_ufnc;
  local_58 = _B_mnufrlip;
  local_54 = _TYP_ufmv;
  DAT_003fa0e0 = '\0';
  if (ei_dufska == '\0') {
    if (ei_mver_um == '\0') {
      mpfad = B_fgr != '\0';
      if (DAT_003fc124 != '\0') {
        mpfad = mpfad | 2;
      }
      if (B_mibeg != '\0') {
        mpfad = mpfad | 4;
      }
      if (B_sgs != '\0') {
        mpfad = mpfad | 8;
      }
      if (B_fgr_um != '\0') {
        mpfad = mpfad | 0x10;
      }
      if (B_nomsr_um != '\0') {
        mpfad = mpfad | 0x20;
      }
      if (B_nosgs_um != '\0') {
        mpfad = mpfad | 0x40;
      }
      mi_duf = mi_um;
      if (ei_rlip_um == '\0') {
        if (ei_vvt_um == '\0') {
          if (ei_dps_um == '\0') {
            if (ei_nc_um == '\0') {
              if (ei_spsc_um == '\0') {
                if (ei_tpu_um == '\0') {
                  if (ei_ipa_um == '\0') {
                    if (ei_reac_um == '\0') {
                      if (ei_adcc_um == '\0') {
                        if (ei_zwc_um == '\0') {
                          if (ei_rlc_um == '\0') {
                            DAT_003fa0e0 = '\x01';
                          }
                          else {
                            local_68 = _B_npufsga & 0xd0fc | 0x2103;
                          }
                        }
                        else {
                          local_68 = _B_npufsga & 0xd0fc | 0x2203;
                        }
                      }
                      else {
                        local_68 = _B_npufsga & 0xd0fc | 0x2403;
                      }
                    }
                    else {
                      local_68 = _B_npufsga & 0xd0fc | 0x2803;
                    }
                  }
                  else {
                    local_64 = _B_npufsgb & 0xd0fc | 0x2803;
                  }
                }
                else {
                  local_50 = _B_npufsgc & 0xd0fc | 0x2103;
                }
              }
              else {
                local_60 = _TYP_ufspsc & 0xd0fc | 0x2803;
              }
            }
            else {
              local_5c = _TYP_ufnc & 0xd0fc | 0x2803;
            }
          }
          else {
            local_58 = _B_mnufrlip & 0xd0fc | 0x2203;
          }
        }
        else {
          local_58 = _B_mnufrlip & 0xd0fc | 0x2403;
        }
      }
      else {
        local_58 = _B_mnufrlip & 0xd0fc | 0x2803;
      }
    }
    else {
      local_54 = _TYP_ufmv & 0xd0fc | 0x2803;
    }
    if (DAT_003fa0e0 == '\0') {
      ei_dufska = '\x01';
    }
  }
  egaspfad = B_ehfs != '\0';
  if (B_wdk2sel != '\0') {
    egaspfad = egaspfad | 2;
  }
  if (B_pwgnotfr != '\0') {
    egaspfad = egaspfad | 4;
  }
  if (B_spsmin != '\0') {
    egaspfad = egaspfad | 8;
  }
  if (B_sp1s != '\0') {
    egaspfad = egaspfad | 0x10;
  }
  if (B_sp2s != '\0') {
    egaspfad = egaspfad | 0x20;
  }
  if (B_notlu_fr != '\0') {
    egaspfad = egaspfad | 0x40;
  }
  if (B_ub_ok != '\0') {
    egaspfad = egaspfad | 0x80;
  }
  if (DAT_001c0e9f < nmot_um) {
    if (duf_c < DAT_001c0e9e) {
      duf_c = duf_c + 1;
    }
    else {
      local_54 = local_54 & 0xdffd | 0x2002;
      local_58 = local_58 & 0xdffd | 0x2002;
      local_5c = local_5c & 0xdffd | 0x2002;
      local_60 = local_60 & 0xdffd | 0x2002;
      local_50 = local_50 & 0xdffd | 0x2002;
      local_64 = local_64 & 0xdffd | 0x2002;
      local_68 = local_68 & 0xdffd | 0x2002;
    }
  }
  else {
    duf_c = 0;
  }
  local_4c[0] = local_54;
  local_48[0] = local_54;
  local_44 = local_4c;
  func_0xff222958(0xb4,local_48);
  local_4c[0] = local_58;
  local_40[0] = local_58;
  local_3c = local_4c;
  func_0xff222958(0xb6,local_40);
  local_4c[0] = local_5c;
  local_38[0] = local_5c;
  local_34 = local_4c;
  func_0xff222958(0xb5,local_38);
  local_4c[0] = local_60;
  local_30[0] = local_60;
  local_2c = local_4c;
  func_0xff222958(0xba,local_30);
  local_4c[0] = local_68;
  local_28[0] = local_68;
  local_24 = local_4c;
  func_0xff222958(0xb7,local_28);
  local_4c[0] = local_64;
  local_20[0] = local_64;
  local_1c = local_4c;
  func_0xff222958(0xb8,local_20);
  local_4c[0] = local_50;
  local_18[0] = local_50;
  local_14 = local_4c;
  func_0xff222958(0xb9,local_18);
  return;
}

