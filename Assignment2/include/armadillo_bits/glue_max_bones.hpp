// Copyright (C) 2013 Conrad Sanderson
// Copyright (C) 2013 NICTA (www.nicta.com.au)
// 
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.



//! \addtogroup glue_max
//! @{



class glue_max
  {
  public:
  
  template<typename eT, typename T1, typename T2> inline static void apply(Mat< eT              >& out, const Proxy<T1>& PA, const Proxy<T2>& PB);
  
  template<typename  T, typename T1, typename T2> inline static void apply(Mat< std::complex<T> >& out, const Proxy<T1>& PA, const Proxy<T2>& PB);
  
  template<typename T1, typename T2> inline static void apply(Mat<typename T1::elem_type>& out, const Glue<T1,T2,glue_max>& X);
  };



//! @}

