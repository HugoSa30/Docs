/*
 * Program: n42.bin
 * Function: FUN_000c9d24
 * Entry: 000c9d24
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000c9e30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c9d24(void)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (B_krldy == 0) {
    if (wkrdy == 0) {
      B_krldya = '\0';
    }
    else {
      zaldy = zaldy - 1;
      if (zaldy == 0) {
        if ((CWZWDYN & 2) == 0) {
          iVar4 = (uint)wkrdy - (uint)DYAFVS;
          if (iVar4 < 0) {
            iVar4 = 0;
          }
          else if (0xff < iVar4) {
            iVar4 = 0xff;
          }
          wkrdy = (byte)iVar4;
        }
        else {
          wkrdy = 0;
        }
        zaldy = DYAVF;
        if (wkrdy == 0) {
          B_krldya = '\0';
        }
      }
    }
  }
  else {
    if (zzylkr == 0) {
      zldy = zldy + -1;
    }
    if ((zldy == '\0') || (B_ll != '\0')) {
      if (B_krldya != '\0') {
        if (B_kldystk == '\0') {
          if ((B_kldynrm == '\0') && (B_krldyf != '\0')) {
            uVar2 = (uint)_zzwdykr + (uint)_zzwdymd;
            if (0xffff < uVar2) {
              uVar2 = 0xffff;
            }
            _DAT_003fb160 = (undefined2)uVar2;
            if (_zzwdymd == 0) {
              _DAT_003fb15a = 0xff;
            }
            else {
              uVar3 = (uint)_zzwdykr * 0xff;
              _DAT_003fb164 = (undefined2)(uVar3 >> 0x10);
              uVar1 = _DAT_003fb164;
              _DAT_003fb164 = uVar3;
              _DAT_003fb15a = FUN_000a7b40(uVar1,uVar3 & 0xffff,uVar2 & 0xffff);
            }
            if (((PZWKRA <= _DAT_003fb15a) &&
                (uVar2 = (uint)DAT_003fb158, (&UNK_003fdda8)[uVar2] != '\0')) &&
               ((&UNK_003fdda8)[uVar2] = (&UNK_003fdda8)[uVar2] + -1,
               (byte)(&UNK_003fdda8)[uVar2] < DYAMNV)) {
              (&UNK_003fdda8)[uVar2] = DYAMNV;
            }
          }
        }
        else {
          uVar2 = (uint)DAT_003fb158;
          (&UNK_003fdda8)[uVar2] = (&UNK_003fdda8)[uVar2] + krfkw;
          if (DYADMX < (byte)(&UNK_003fdda8)[uVar2]) {
            (&UNK_003fdda8)[uVar2] = DYADMX;
          }
        }
        B_kldynrm = '\0';
        B_kldystk = '\0';
      }
      if ((CWZWDYN & 2) == 0) {
        B_krldyf = '\0';
        B_krldy = 0;
      }
      else {
        B_krldy = B_zwdyn;
      }
      _zzwdykr = 0;
      _zzwdymd = 0;
      zldy = '\0';
    }
    else if (B_krldya != '\0') {
      if (B_krldyf != '\0') {
        if (B_zwkraa == '\0') {
          _zzwdymd = _zzwdymd + 1;
        }
        else {
          _zzwdykr = _zzwdykr + 1;
        }
      }
      if (B_kl != '\0') {
        _DAT_003fb15e = (undefined2)((uint)FKELDYA * (uint)(byte)(&DAT_005b9148)[zzylkr]);
        if ((uint)virkr < (uint)FKELDYA * (uint)(byte)(&DAT_005b9148)[zzylkr] >> 6) {
          B_kldynrm = '\x01';
        }
        else {
          B_kldystk = '\x01';
        }
      }
    }
  }
  if (B_krndy != '\0') {
    if (zzylkr == 0) {
      zndy = zndy + -1;
    }
    if ((zndy == '\0') || (B_ll != '\0')) {
      B_krndy = '\0';
      zndy = '\0';
    }
  }
  return;
}

