<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace Beeble;

/**
 * Original thrift service:-
 * Brox
 */
interface BeebleBroxAsyncIf extends \IThriftAsyncIf {
}

/**
 * Original thrift service:-
 * Brox
 */
interface BeebleBroxIf extends \IThriftSyncIf {
}

/**
 * Original thrift service:-
 * Brox
 */
interface BeebleBroxClientIf extends \IThriftSyncIf {
}

/**
 * Original thrift service:-
 * Brox
 */
trait BeebleBroxClientBase {
  require extends \ThriftClientBase;

}

class BeebleBroxAsyncClient extends \ThriftClientBase implements BeebleBroxAsyncIf {
  use BeebleBroxClientBase;

}

class BeebleBroxClient extends \ThriftClientBase implements BeebleBroxClientIf {
  use BeebleBroxClientBase;

  /* send and recv functions */
}

// HELPER FUNCTIONS AND STRUCTURES

