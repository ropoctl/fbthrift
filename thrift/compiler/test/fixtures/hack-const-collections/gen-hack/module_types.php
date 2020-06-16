<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * Foo
 */
class Foo implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'a',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'collection',
    ),
    2 => shape(
      'var' => 'b',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::LST,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::LST,
        'etype' => \TType::SET,
        'elem' => shape(
          'type' => \TType::SET,
          'etype' => \TType::I32,
          'elem' => shape(
            'type' => \TType::I32,
          ),
          'format' => 'collection',
        ),
        'format' => 'collection',
      ),
      'format' => 'collection',
    ),
    3 => shape(
      'var' => 'c',
      'type' => \TType::I64,
    ),
    4 => shape(
      'var' => 'd',
      'type' => \TType::BOOL,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'a' => 1,
    'b' => 2,
    'c' => 3,
    'd' => 4,
  ];

  const type TConstructorShape = shape(
    ?'a' => ConstVector<string>,
    ?'b' => ?ConstMap<string, ConstVector<ConstSet<int>>>,
    ?'c' => int,
    ?'d' => bool,
  );

  const int STRUCTURAL_ID = 3946809642153193229;
  /**
   * Original thrift field:-
   * 1: list<string> a
   */
  public ConstVector<string> $a;
  /**
   * Original thrift field:-
   * 2: map<string, list<set<i32>>> b
   */
  public ?ConstMap<string, ConstVector<ConstSet<int>>> $b;
  /**
   * Original thrift field:-
   * 3: i64 c
   */
  public int $c;
  /**
   * Original thrift field:-
   * 4: bool d
   */
  public bool $d;

  <<__Rx>>
  public function __construct(?ConstVector<string> $a = null, ?ConstMap<string, ConstVector<ConstSet<int>>> $b = null, ?int $c = null, ?bool $d = null  ) {
    $this->a = $a ?? Vector {};
    $this->b = $b;
    $this->c = $c ?? 7;
    $this->d = $d ?? false;
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'a'),
      Shapes::idx($shape, 'b'),
      Shapes::idx($shape, 'c'),
      Shapes::idx($shape, 'd'),
    );
  }

  public function getName(): string {
    return 'Foo';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
}

/**
 * Original thrift exception:-
 * Baz
 */
class Baz extends \TException implements \IThriftStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'message',
      'type' => \TType::STRING,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'message' => 1,
  ];

  const type TConstructorShape = shape(
    ?'message' => string,
  );

  const int STRUCTURAL_ID = 2427562471238739676;
  /**
   * Original thrift field:-
   * 1: string message
   */
  public string $message;

  <<__Rx>>
  public function __construct(?string $message = null  ) {
    parent::__construct();
    $this->message = $message ?? '';
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'message'),
    );
  }

  public function getName(): string {
    return 'Baz';
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }
}

