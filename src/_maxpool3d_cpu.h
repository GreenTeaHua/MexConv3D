#pragma once
#include "maxpool3d.h"

struct maxpool3d_cpu : public maxpool3d {
  maxpool3d_cpu ();

  void fprop ();
  void bprop ();
  CALL_TYPE parse_and_set (int no, mxArray *vo[], int ni, mxArray const *vi[]);

private:
  void set_pool   (mxArray const *pa);
  void set_stride (mxArray const *pa);
  void set_pad    (mxArray const *pa);

  void create_Y   ();
  void create_ind ();
  void create_dX  ();
};