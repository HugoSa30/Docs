/*
 * Program: n42.bin
 * Function: FUN_0012b200
 * Entry: 0012b200
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012b200(void)

{
  float fVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  
  zyl2 = 2;
  B_fomodold = B_fomod;
  bVar6 = DAT_001c18a9 != '\0';
  if (((CDFO != '\0') && (B_pwf == '\0')) && ((bool)B_fomod == bVar6)) {
    bVar4 = 0;
    do {
      if ((B_fofdr == '\0') || (DAT_003fa9a1 != '\0')) {
        DAT_003fa9a0 = 0;
      }
      else {
        DAT_003fa9a0 = 1;
      }
      bVar4 = bVar4 + 1;
      DAT_003fa9a1 = B_fofdr;
    } while (bVar4 < 2);
    zyl2 = 2;
    anwst = _ANWSTP;
    anwfofs = _ANWFOST;
    B_zylind = bVar6;
    B_fomod = bVar6;
    _DAT_003fa9be = _ANWSTP;
    _DAT_003fa9ba = _fofresz;
    DAT_003fa9b0 = B_fofdr != '\0';
    _DAT_003fa9a8 = _ANWFOST;
    DAT_003fa9a1 = B_fofdr;
    return;
  }
  B_fofr = 0;
  B_fofr1 = 0;
  B_fofr2 = 0;
  B_fofr3 = 0;
  B_fofr4 = 0;
  B_fofdr = 0;
  DAT_003fa9b0 = 0;
  fofstat = 2;
  _DAT_003fa9ba = 0;
  _fofresz = 0;
  anwfofs = _ANWFOST;
  _DAT_003fa9a8 = _ANWFOST;
  anwst = _ANWSTP;
  _DAT_003fa9be = _ANWSTP;
  bVar4 = 1;
  B_fomod = bVar6;
  B_zylind = bVar6;
  do {
    uVar2 = _DAT_0001bdc4;
    bVar5 = 0;
    do {
      *(undefined4 *)(&UNK_003fda84 + (uint)bVar5 * 4) = uVar2;
      bVar5 = bVar5 + 1;
    } while (bVar5 < 4);
    while( true ) {
      uVar2 = _DAT_0001bdc4;
      bVar4 = bVar4 + 1;
      if (4 < bVar4) {
        bVar4 = 1;
        do {
          bVar5 = 1;
          do {
            if (bVar6) {
              bVar3 = 3;
            }
            else {
              bVar3 = 1;
            }
            fVar1 = _DAT_0001bdc8;
            if (bVar5 <= bVar3) {
              fVar1 = -_ALFOF;
            }
            *(float *)(&UNK_003fd844 + (uint)bVar5 * 4) = fVar1;
            bVar5 = bVar5 + 1;
          } while (bVar5 < 4);
          while( true ) {
            bVar4 = bVar4 + 1;
            if (4 < bVar4) {
              bVar4 = 1;
              do {
                bVar5 = 1;
                do {
                  if (bVar6) {
                    bVar3 = 3;
                  }
                  else {
                    bVar3 = 1;
                  }
                  fVar1 = _DAT_0001bdc8;
                  if (bVar5 <= bVar3) {
                    fVar1 = _ALFOF;
                  }
                  *(float *)(&UNK_003fd904 + (uint)bVar5 * 4) = fVar1;
                  bVar5 = bVar5 + 1;
                } while (bVar5 < 4);
                while( true ) {
                  bVar4 = bVar4 + 1;
                  if (4 < bVar4) {
                    bVar4 = 1;
                    do {
                      uVar2 = _DAT_0001bdc4;
                      bVar5 = 0;
                      do {
                        *(undefined4 *)(&UNK_003fd9c4 + (uint)bVar5 * 4) = uVar2;
                        bVar5 = bVar5 + 1;
                      } while (bVar5 < 4);
                      while( true ) {
                        uVar2 = _DAT_0001bdc4;
                        bVar4 = bVar4 + 1;
                        if (4 < bVar4) {
                          return;
                        }
                        if (bVar4 == 1) break;
                        if (bVar4 == 2) {
                          bVar5 = 0;
                          do {
                            *(undefined4 *)(&UNK_003fd9f4 + (uint)bVar5 * 4) = uVar2;
                            bVar5 = bVar5 + 1;
                          } while (bVar5 < 4);
                        }
                        else if (bVar4 == 3) {
                          bVar5 = 0;
                          do {
                            *(undefined4 *)(&UNK_003fda24 + (uint)bVar5 * 4) = uVar2;
                            bVar5 = bVar5 + 1;
                          } while (bVar5 < 4);
                        }
                        else if (bVar4 == 4) {
                          bVar5 = 0;
                          do {
                            *(undefined4 *)(&UNK_003fda54 + (uint)bVar5 * 4) = uVar2;
                            bVar5 = bVar5 + 1;
                          } while (bVar5 < 4);
                        }
                      }
                    } while( true );
                  }
                  if (bVar4 == 1) break;
                  if (bVar4 == 2) {
                    bVar5 = 1;
                    do {
                      if (bVar6) {
                        bVar3 = 3;
                      }
                      else {
                        bVar3 = 1;
                      }
                      fVar1 = _DAT_0001bdc8;
                      if (bVar5 <= bVar3) {
                        fVar1 = _ALFOF;
                      }
                      *(float *)(&UNK_003fd934 + (uint)bVar5 * 4) = fVar1;
                      bVar5 = bVar5 + 1;
                    } while (bVar5 < 4);
                  }
                  else if (bVar4 == 3) {
                    bVar5 = 1;
                    do {
                      if (bVar6) {
                        bVar3 = 3;
                      }
                      else {
                        bVar3 = 1;
                      }
                      fVar1 = _DAT_0001bdc8;
                      if (bVar5 <= bVar3) {
                        fVar1 = _ALFOF;
                      }
                      *(float *)(&UNK_003fd964 + (uint)bVar5 * 4) = fVar1;
                      bVar5 = bVar5 + 1;
                    } while (bVar5 < 4);
                  }
                  else if (bVar4 == 4) {
                    bVar5 = 1;
                    do {
                      if (bVar6) {
                        bVar3 = 3;
                      }
                      else {
                        bVar3 = 1;
                      }
                      fVar1 = _DAT_0001bdc8;
                      if (bVar5 <= bVar3) {
                        fVar1 = _ALFOF;
                      }
                      *(float *)(&UNK_003fd994 + (uint)bVar5 * 4) = fVar1;
                      bVar5 = bVar5 + 1;
                    } while (bVar5 < 4);
                  }
                }
              } while( true );
            }
            if (bVar4 == 1) break;
            if (bVar4 == 2) {
              bVar5 = 1;
              do {
                if (bVar6) {
                  bVar3 = 3;
                }
                else {
                  bVar3 = 1;
                }
                fVar1 = _DAT_0001bdc8;
                if (bVar5 <= bVar3) {
                  fVar1 = -_ALFOF;
                }
                *(float *)(&UNK_003fd874 + (uint)bVar5 * 4) = fVar1;
                bVar5 = bVar5 + 1;
              } while (bVar5 < 4);
            }
            else if (bVar4 == 3) {
              bVar5 = 1;
              do {
                if (bVar6) {
                  bVar3 = 3;
                }
                else {
                  bVar3 = 1;
                }
                fVar1 = _DAT_0001bdc8;
                if (bVar5 <= bVar3) {
                  fVar1 = -_ALFOF;
                }
                *(float *)(&UNK_003fd8a4 + (uint)bVar5 * 4) = fVar1;
                bVar5 = bVar5 + 1;
              } while (bVar5 < 4);
            }
            else if (bVar4 == 4) {
              bVar5 = 1;
              do {
                if (bVar6) {
                  bVar3 = 3;
                }
                else {
                  bVar3 = 1;
                }
                fVar1 = _DAT_0001bdc8;
                if (bVar5 <= bVar3) {
                  fVar1 = -_ALFOF;
                }
                *(float *)(&UNK_003fd8d4 + (uint)bVar5 * 4) = fVar1;
                bVar5 = bVar5 + 1;
              } while (bVar5 < 4);
            }
          }
        } while( true );
      }
      if (bVar4 == 1) break;
      if (bVar4 == 2) {
        bVar5 = 0;
        do {
          *(undefined4 *)(&UNK_003fdab4 + (uint)bVar5 * 4) = uVar2;
          bVar5 = bVar5 + 1;
        } while (bVar5 < 4);
      }
      else if (bVar4 == 3) {
        bVar5 = 0;
        do {
          *(undefined4 *)(&UNK_003fdae4 + (uint)bVar5 * 4) = uVar2;
          bVar5 = bVar5 + 1;
        } while (bVar5 < 4);
      }
      else if (bVar4 == 4) {
        bVar5 = 0;
        do {
          *(undefined4 *)(&UNK_003fdb14 + (uint)bVar5 * 4) = uVar2;
          bVar5 = bVar5 + 1;
        } while (bVar5 < 4);
      }
    }
  } while( true );
}

