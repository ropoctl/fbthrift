// @generated by Thrift. This file is probably not the place you want to edit!

#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals)]

pub use self::consts::*;
pub use self::errors::*;
pub use self::types::*;

pub mod consts {
    pub const kOne: crate::types::MyEnum = crate::types::MyEnum::ONE;
}

pub mod types {
    #![allow(clippy::redundant_closure)]

    use fbthrift::{
        Deserialize, GetTType, ProtocolReader, ProtocolWriter, Serialize, TType,
    };

    #[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
    pub struct MyStruct {
        pub myEnum: crate::types::MyEnum,
        pub myBigEnum: crate::types::MyBigEnum,
    }

    #[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
    pub struct EmptyEnum(pub i32);

    impl EmptyEnum {
    }

    impl Default for EmptyEnum {
        fn default() -> Self {
            EmptyEnum(fbthrift::__UNKNOWN_ID)
        }
    }

    impl<'a> From<&'a EmptyEnum> for i32 {
        #[inline]
        fn from(x: &'a EmptyEnum) -> i32 {
            x.0
        }
    }

    impl From<EmptyEnum> for i32 {
        #[inline]
        fn from(x: EmptyEnum) -> i32 {
            x.0
        }
    }

    impl From<i32> for EmptyEnum {
        #[inline]
        fn from(x: i32) -> Self {
            Self(x)
        }
    }

    impl std::fmt::Display for EmptyEnum {
        fn fmt(&self, fmt: &mut std::fmt::Formatter) -> std::fmt::Result {
            write!(fmt, "{}", self.0)
        }
    }

    impl std::fmt::Debug for EmptyEnum {
        fn fmt(&self, fmt: &mut std::fmt::Formatter) -> std::fmt::Result {
            write!(fmt, "EmptyEnum::{}", self)
        }
    }

    impl std::str::FromStr for EmptyEnum {
        type Err = anyhow::Error;

        fn from_str(string: &str) -> std::result::Result<Self, Self::Err> {
            match string {
                _ => anyhow::bail!("Unable to parse {} as EmptyEnum", string),
            }
        }
    }

    impl GetTType for EmptyEnum {
        const TTYPE: TType = TType::I32;
    }

    impl<P: ProtocolWriter> Serialize<P> for EmptyEnum {
        #[inline]
        fn write(&self, p: &mut P) {
            p.write_i32(self.into())
        }
    }

    impl<P: ProtocolReader> Deserialize<P> for EmptyEnum {
        #[inline]
        fn read(p: &mut P) -> anyhow::Result<Self> {
            Ok(EmptyEnum::from(p.read_i32()?))
        }
    }

    #[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
    pub struct MyEnum(pub i32);

    impl MyEnum {
        pub const ONE: Self = MyEnum(1i32);
        pub const TWO: Self = MyEnum(2i32);
    }

    impl Default for MyEnum {
        fn default() -> Self {
            MyEnum(fbthrift::__UNKNOWN_ID)
        }
    }

    impl<'a> From<&'a MyEnum> for i32 {
        #[inline]
        fn from(x: &'a MyEnum) -> i32 {
            x.0
        }
    }

    impl From<MyEnum> for i32 {
        #[inline]
        fn from(x: MyEnum) -> i32 {
            x.0
        }
    }

    impl From<i32> for MyEnum {
        #[inline]
        fn from(x: i32) -> Self {
            Self(x)
        }
    }

    impl std::fmt::Display for MyEnum {
        fn fmt(&self, fmt: &mut std::fmt::Formatter) -> std::fmt::Result {
            let s: &str = match *self {
                MyEnum::ONE => "ONE",
                MyEnum::TWO => "TWO",
                MyEnum(x) => return write!(fmt, "{}", x),
            };
            write!(fmt, "{}", s)
        }
    }

    impl std::fmt::Debug for MyEnum {
        fn fmt(&self, fmt: &mut std::fmt::Formatter) -> std::fmt::Result {
            write!(fmt, "MyEnum::{}", self)
        }
    }

    impl std::str::FromStr for MyEnum {
        type Err = anyhow::Error;

        fn from_str(string: &str) -> std::result::Result<Self, Self::Err> {
            match string {
                "ONE" => Ok(MyEnum::ONE),
                "TWO" => Ok(MyEnum::TWO),
                _ => anyhow::bail!("Unable to parse {} as MyEnum", string),
            }
        }
    }

    impl GetTType for MyEnum {
        const TTYPE: TType = TType::I32;
    }

    impl<P: ProtocolWriter> Serialize<P> for MyEnum {
        #[inline]
        fn write(&self, p: &mut P) {
            p.write_i32(self.into())
        }
    }

    impl<P: ProtocolReader> Deserialize<P> for MyEnum {
        #[inline]
        fn read(p: &mut P) -> anyhow::Result<Self> {
            Ok(MyEnum::from(p.read_i32()?))
        }
    }

    #[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
    pub struct MyBigEnum(pub i32);

    impl MyBigEnum {
        pub const UNKNOWN: Self = MyBigEnum(0i32);
        pub const ONE: Self = MyBigEnum(1i32);
        pub const TWO: Self = MyBigEnum(2i32);
        pub const THREE: Self = MyBigEnum(3i32);
        pub const FOUR: Self = MyBigEnum(4i32);
        pub const FIVE: Self = MyBigEnum(5i32);
        pub const SIX: Self = MyBigEnum(6i32);
        pub const SEVEN: Self = MyBigEnum(7i32);
        pub const EIGHT: Self = MyBigEnum(8i32);
        pub const NINE: Self = MyBigEnum(9i32);
        pub const TEN: Self = MyBigEnum(10i32);
        pub const ELEVEN: Self = MyBigEnum(11i32);
        pub const TWELVE: Self = MyBigEnum(12i32);
        pub const THIRTEEN: Self = MyBigEnum(13i32);
        pub const FOURTEEN: Self = MyBigEnum(14i32);
        pub const FIFTEEN: Self = MyBigEnum(15i32);
        pub const SIXTEEN: Self = MyBigEnum(16i32);
        pub const SEVENTEEN: Self = MyBigEnum(17i32);
        pub const EIGHTEEN: Self = MyBigEnum(18i32);
        pub const NINETEEN: Self = MyBigEnum(19i32);
    }

    impl Default for MyBigEnum {
        fn default() -> Self {
            MyBigEnum(fbthrift::__UNKNOWN_ID)
        }
    }

    impl<'a> From<&'a MyBigEnum> for i32 {
        #[inline]
        fn from(x: &'a MyBigEnum) -> i32 {
            x.0
        }
    }

    impl From<MyBigEnum> for i32 {
        #[inline]
        fn from(x: MyBigEnum) -> i32 {
            x.0
        }
    }

    impl From<i32> for MyBigEnum {
        #[inline]
        fn from(x: i32) -> Self {
            Self(x)
        }
    }

    impl std::fmt::Display for MyBigEnum {
        fn fmt(&self, fmt: &mut std::fmt::Formatter) -> std::fmt::Result {
            let s: &str = match *self {
                MyBigEnum::UNKNOWN => "UNKNOWN",
                MyBigEnum::ONE => "ONE",
                MyBigEnum::TWO => "TWO",
                MyBigEnum::THREE => "THREE",
                MyBigEnum::FOUR => "FOUR",
                MyBigEnum::FIVE => "FIVE",
                MyBigEnum::SIX => "SIX",
                MyBigEnum::SEVEN => "SEVEN",
                MyBigEnum::EIGHT => "EIGHT",
                MyBigEnum::NINE => "NINE",
                MyBigEnum::TEN => "TEN",
                MyBigEnum::ELEVEN => "ELEVEN",
                MyBigEnum::TWELVE => "TWELVE",
                MyBigEnum::THIRTEEN => "THIRTEEN",
                MyBigEnum::FOURTEEN => "FOURTEEN",
                MyBigEnum::FIFTEEN => "FIFTEEN",
                MyBigEnum::SIXTEEN => "SIXTEEN",
                MyBigEnum::SEVENTEEN => "SEVENTEEN",
                MyBigEnum::EIGHTEEN => "EIGHTEEN",
                MyBigEnum::NINETEEN => "NINETEEN",
                MyBigEnum(x) => return write!(fmt, "{}", x),
            };
            write!(fmt, "{}", s)
        }
    }

    impl std::fmt::Debug for MyBigEnum {
        fn fmt(&self, fmt: &mut std::fmt::Formatter) -> std::fmt::Result {
            write!(fmt, "MyBigEnum::{}", self)
        }
    }

    impl std::str::FromStr for MyBigEnum {
        type Err = anyhow::Error;

        fn from_str(string: &str) -> std::result::Result<Self, Self::Err> {
            match string {
                "UNKNOWN" => Ok(MyBigEnum::UNKNOWN),
                "ONE" => Ok(MyBigEnum::ONE),
                "TWO" => Ok(MyBigEnum::TWO),
                "THREE" => Ok(MyBigEnum::THREE),
                "FOUR" => Ok(MyBigEnum::FOUR),
                "FIVE" => Ok(MyBigEnum::FIVE),
                "SIX" => Ok(MyBigEnum::SIX),
                "SEVEN" => Ok(MyBigEnum::SEVEN),
                "EIGHT" => Ok(MyBigEnum::EIGHT),
                "NINE" => Ok(MyBigEnum::NINE),
                "TEN" => Ok(MyBigEnum::TEN),
                "ELEVEN" => Ok(MyBigEnum::ELEVEN),
                "TWELVE" => Ok(MyBigEnum::TWELVE),
                "THIRTEEN" => Ok(MyBigEnum::THIRTEEN),
                "FOURTEEN" => Ok(MyBigEnum::FOURTEEN),
                "FIFTEEN" => Ok(MyBigEnum::FIFTEEN),
                "SIXTEEN" => Ok(MyBigEnum::SIXTEEN),
                "SEVENTEEN" => Ok(MyBigEnum::SEVENTEEN),
                "EIGHTEEN" => Ok(MyBigEnum::EIGHTEEN),
                "NINETEEN" => Ok(MyBigEnum::NINETEEN),
                _ => anyhow::bail!("Unable to parse {} as MyBigEnum", string),
            }
        }
    }

    impl GetTType for MyBigEnum {
        const TTYPE: TType = TType::I32;
    }

    impl<P: ProtocolWriter> Serialize<P> for MyBigEnum {
        #[inline]
        fn write(&self, p: &mut P) {
            p.write_i32(self.into())
        }
    }

    impl<P: ProtocolReader> Deserialize<P> for MyBigEnum {
        #[inline]
        fn read(p: &mut P) -> anyhow::Result<Self> {
            Ok(MyBigEnum::from(p.read_i32()?))
        }
    }

    impl Default for self::MyStruct {
        fn default() -> Self {
            Self {
                myEnum: Default::default(),
                myBigEnum: crate::types::MyBigEnum::ONE,
            }
        }
    }

    impl GetTType for self::MyStruct {
        const TTYPE: TType = TType::Struct;
    }

    impl<P: ProtocolWriter> Serialize<P> for self::MyStruct {
        fn write(&self, p: &mut P) {
            p.write_struct_begin("MyStruct");
            p.write_field_begin("myEnum", TType::I32, 1);
            Serialize::write(&self.myEnum, p);
            p.write_field_end();
            p.write_field_begin("myBigEnum", TType::I32, 2);
            Serialize::write(&self.myBigEnum, p);
            p.write_field_end();
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P: ProtocolReader> Deserialize<P> for self::MyStruct {
        fn read(p: &mut P) -> anyhow::Result<Self> {
            let mut field_myEnum = None;
            let mut field_myBigEnum = None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| ())?;
                match (fty, fid as i32) {
                    (TType::Stop, _) => break,
                    (TType::I32, 1) => field_myEnum = Some(Deserialize::read(p)?),
                    (TType::I32, 2) => field_myBigEnum = Some(Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            Ok(Self {
                myEnum: field_myEnum.unwrap_or_default(),
                myBigEnum: field_myBigEnum.unwrap_or_else(|| crate::types::MyBigEnum::ONE),
            })
        }
    }

}

pub mod errors {
    use fbthrift::ApplicationException;
    use thiserror::Error;

    #[derive(Debug, Error)]
    pub enum ErrorKind {
        #[error("Application exception: {0:?}")]
        ApplicationException(ApplicationException),
    }

    impl From<ApplicationException> for ErrorKind {
        fn from(exn: ApplicationException) -> Self {
            ErrorKind::ApplicationException(exn)
        }
    }
}
