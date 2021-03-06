#ifndef _EVENT_HANDLER_H_
#define _EVENT_HANDLER_H_

// Forward declaration.
class Reactor;

/**
 * @class Event_Handler
 * @brief Provides an abstract interface for handling various types of
 *        events, e.g., input events.
 *
 *         Subclasses read/write input/output on an I/O handle, etc.
 */
class Event_Handler
{
public:
  /// Called back by the @a Reactor when input events occur.
  virtual void handle_input () = 0;

  /// Virtual destructor.
  virtual ~Event_Handler ();
};

#endif /* _EVENT_HANDLER_H_ */
