/*
 * Program: n42.bin
 * Function: calc_gear
 * Entry: 00192acc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void calc_gear(void)

{
  byte bVar1;
  uint uVar2;
  undefined2 local_20;
  
  bVar1 = gangi;
  if (B_autget == '\0') {
    if (((DAT_003fdfdf & 1) == 0) && (B_vnull == '\0')) {
      local_20 = (undefined2)(((uint)nmot_w << 0xc) >> 0x10);
      nvquot_w = func_0xff217b40(local_20,(uint)nmot_w << 0xc & 0xffff,vfzg_w);
      if ((((((((bVar1 != 1) || (nvquot_w < _NVQUOT1U)) || (_NVQUOT1O < nvquot_w)) &&
             (((bVar1 != 2 || (nvquot_w < _NVQUOT2U)) || (_NVQUOT2O < nvquot_w)))) &&
            (((bVar1 != 3 || (nvquot_w < _NVQUOT3U)) || (_NVQUOT3O < nvquot_w)))) &&
           (((bVar1 != 4 || (nvquot_w < _NVQUOT4U)) || (_NVQUOT4O < nvquot_w)))) &&
          (((bVar1 != 5 || (nvquot_w < _NVQUOT5U)) || (_NVQUOT5O < nvquot_w)))) &&
         (((bVar1 != 6 || (nvquot_w < _NVQUOT6U)) || (_NVQUOT6O < nvquot_w)))) {
        if ((nvquot_w < _NVQUOT1U) || (_NVQUOT1O < nvquot_w)) {
          if ((nvquot_w < _NVQUOT2U) || (_NVQUOT2O < nvquot_w)) {
            if ((nvquot_w < _NVQUOT3U) || (_NVQUOT3O < nvquot_w)) {
              if ((nvquot_w < _NVQUOT4U) || (_NVQUOT4O < nvquot_w)) {
                if ((nvquot_w < _NVQUOT5U) || (_NVQUOT5O < nvquot_w)) {
                  if ((nvquot_w < _NVQUOT6U) || (_NVQUOT6O < nvquot_w)) {
                    if (nmot_w < _NGANGMIN) {
                      gangi = 3;
                    }
                    else {
                      gangi = 0;
                    }
                  }
                  else {
                    gangi = 6;
                  }
                }
                else {
                  gangi = 5;
                }
              }
              else {
                gangi = 4;
              }
            }
            else {
              gangi = 3;
            }
          }
          else {
            gangi = 2;
          }
        }
        else {
          gangi = 1;
        }
      }
    }
    else {
      gangi = 0;
    }
  }
  else {
    gangi = gangauti;
  }
  uVar2 = (uint)gangi;
  if ((B_autget == '\0') && (bVar1 != uVar2)) {
    B_gwhs = 1;
  }
  else {
    B_gwhs = 0;
  }
  uevges = IGESGA;
  if ((uVar2 != 0) && (uevges = DAT_001c1c27, uVar2 < 8)) {
    uevges = (&IGESGA)[uVar2];
  }
  return;
}

