export const DisplayText = (props) => {
  if (props.name == "Hinga") {
    return <></>;
  }

  if (props.name == "Karume") {
    return <h1>Hello Mr. {props.name}</h1>;
  }

  return <h1>Hello {props.name}.</h1>;
};
